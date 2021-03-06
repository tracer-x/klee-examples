/*
 * Copyright 2017 National University of Singapore
 *
 * This program is for testing memory bounds check interpolation.
 * Some versions failed to report error due to incorrect memory
 * bounds interpolation generated from a subsumed node.
 */

#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif

int main(int argc, char **argv)
{
  char s[1000];
  char *p;
  char a, b, c;

#ifdef LLBMC
  a = __llbmc_nondef_char();
  b = __llbmc_nondef_char();
  c = __llbmc_nondef_char();
#else
  klee_make_symbolic(&a, sizeof(char), "a");
  klee_make_symbolic(&b, sizeof(char), "b");
  klee_make_symbolic(&c, sizeof(char), "c");
#endif

  int n;
#ifdef LLBMC
  n = __llbmc_nondef_int();
  __llbmc_assume(n <= 10);
  __llbmc_assume(n >= 0);	   
#else
  klee_make_symbolic(&n, sizeof(int), "n");
  klee_assume(n <= 10);
  klee_assume(n >= 0);
#endif

  p = s + n;
  if (a) {
    p += 1;
  } else {
    p += 2;
  }
  if (b) {
    p += 1;
  }
  if (c) {
    p += 2;
  }
  
  // Max increment is 999 - 5 - n, but the following exceeds it
  p += 995 - n;

  // p should be in s
  return *p;
}

