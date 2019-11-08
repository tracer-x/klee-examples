/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */
#include<stdio.h>
#define LLBMC 1
#ifdef LLBMC
#include "llbmc.h"
#else
#include <klee/klee.h>
#endif

#include <stdio.h> 
#include <assert.h>
#include <math.h>
#include <stdlib.h>
/* compiler builtin: 
   void *__builtin_alloca(unsigned int  ) ;  */
int wcet;
int BOUND1  =    30;
int BOUND2  =    30;
int kappa  =    0;
int error  ;
int tempDisplay  ;
int warnLED  ;
int tempIn  ;
int chainBroken  ;
int warnLight  ;
int temp  ;
int otime  =    0;
int time  =    0;
int limit  ;
int init  =    0;
void display(int tempdiff , int warning ) 
{ 

  {
  tempDisplay = tempdiff;
  warnLED = warning;
  return;
}
}
int vinToCels(int kelvin ) 
{ 

  {
  if (temp < 0) {
    error = 1;
    display(kelvin - 273, error);
  }
  return (kelvin - 273);
}
}

void coolantControl(void) 
{ int *symb2 ;
  unsigned int __lengthofsymb2 ;
  void *tmp ;
  int FLAG ;

  {
  __lengthofsymb2 = (unsigned int )BOUND2;
  tmp = __builtin_alloca(sizeof(*symb2) * __lengthofsymb2);
  symb2 = (int *)tmp;
   #ifdef LLBMC
  for (int i = 0; i < BOUND2; ++i) {
    symb2[i] = __llbmc_nondef_int();
  }
  #else
 klee_make_symbolic(symb2, sizeof(int ) * (unsigned int )BOUND2, "symb2");
  #endif  
  FLAG = 0;
  while (FLAG < BOUND2) {
    otime = time;
    time = otime + 1;
    tempIn = *(symb2 + FLAG);
    temp = vinToCels(tempIn);
    if (temp > limit) {
      chainBroken = 1;
    }
    FLAG = FLAG + 1;
  }
  return;
}
}

int main(void) 
{ wcet = 0;
int *symb1 ;
  unsigned int __lengthofsymb1 ;
  void *tmp ;
  int FLAG ;
  int limit___0 ;

  {
  init = 0;
  tempDisplay = 0;
  warnLED = 1;
  tempIn = 0;
  error = 0;
  chainBroken = 0;
  warnLight = 0;
  temp = 0;
  limit = 8;
  init = 1;
  __lengthofsymb1 = (unsigned int )BOUND1;
  tmp = __builtin_alloca(sizeof(*symb1) * __lengthofsymb1);
  symb1 = (int *)tmp;
  #ifdef LLBMC
  for (int i = 0; i < BOUND1; ++i) {
    symb1[i] = __llbmc_nondef_int();
  }
  #else
 klee_make_symbolic(symb1, sizeof(int ) * (unsigned int )BOUND1, "symb1");
  #endif  
  FLAG = 0;
  while (FLAG < BOUND1) {
    limit___0 = *(symb1 + FLAG);
    if (limit___0 < 10) {
      if (limit___0 > -273) {
        error = 0;
        display(0, error);
        break;
      } else {
        error = 1;
        display(0, error);
      }
    } else {
      error = 1;
      display(0, error);
    }
    FLAG = FLAG + 1;
  }
  init = 2;
  coolantControl();
  tracerx_check();
  return (0);
}
}
