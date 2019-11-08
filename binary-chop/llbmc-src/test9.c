// This program in Problem1.c
#include <stdio.h>
#define LLBMC 1
#ifdef LLBMC
#include "llbmc.h"
#else
#include <klee/klee.h>
#endif

#define BOUND 10

// inputs
int a = 1;
int d = 4;
int e = 5;
int f = 6;
int c = 3;
int b = 2;

// outputs
int u = 21;
int v = 22;
int w = 23;
int x = 24;
int y = 25;
int z = 26;

int a17 = 1;
int a7 = 0;
int a20 = 1;
int a8 = 15;
int a12 = 8;
int a16 = 5;
int a21 = 1;
int wcet;

int calculate_output(int input) {
  if ((((a8 == 15) &&
        (((((a21 == 1) && (((a16 == 5) || (a16 == 6)) && (input == 1))) &&
           (a20 == 1)) &&
          (a17 == 1)) &&
         !(a7 == 1))) &&
       (a12 == 8))) {
    a16 = 5;
    a20 = 0;
    return 24;
  } else if ((((((((input == 5) && ((((a16 == 6) && (a17 == 1)) ||
                                     (!(a17 == 1) && (a16 == 4))) ||
                                    (!(a17 == 1) && (a16 == 5)))) &&
                  (a20 == 1)) &&
                 (a12 == 8)) &&
                (a7 == 1)) &&
               !(a21 == 1)) &&
              (a8 == 13))) {
    a20 = 0;
    a16 = 6;
    a17 = 0;
    a8 = 15;
    a7 = 0;
    a21 = 1;
    return 26;
  } else if (((!(a7 == 1) &&
               ((((a16 == 6) && ((a21 == 1) && ((a17 == 1) && (input == 3)))) &&
                 !(a20 == 1)) &&
                (a8 == 15))) &&
              (a12 == 8))) {
    a20 = 1;
    a16 = 4;
    a7 = 1;
    a8 = 13;
    return -1;
  } else if (((a17 == 1) &&
              ((!(a7 == 1) &&
                (((a21 == 1) && ((((a16 == 5) || (a16 == 6)) && (input == 6)) &&
                                 (a20 == 1))) &&
                 (a8 == 15))) &&
               (a12 == 8)))) {
    a8 = 13;
    a7 = 1;
    a16 = 4;
    return -1;
  } else if ((((input == 3) &&
               ((((a16 == 6) && ((!(a20 == 1) && (!(a7 == 1) && !(a17 == 1))) &&
                                 (a8 == 15))) &&
                 (a21 == 1)) ||
                ((((a8 == 13) && ((a20 == 1) && ((a17 == 1) && (a7 == 1)))) &&
                  (a16 == 4)) &&
                 !(a21 == 1)))) &&
              (a12 == 8))) {
    a7 = 0;
    a20 = 1;
    a21 = 1;
    a16 = 4;
    a17 = 1;
    a8 = 13;
    return -1;
  } else if ((((a17 == 1) &&
               (((a21 == 1) && ((!(a7 == 1) && ((input == 4) && (a8 == 15))) &&
                                !(a20 == 1))) &&
                (a12 == 8))) &&
              (a16 == 6))) {
    a17 = 0;
    return 26;
  } else if ((((a12 == 8) &&
               (((a21 == 1) && ((((input == 5) && !(a7 == 1)) && (a8 == 15)) &&
                                (a16 == 5))) &&
                !(a20 == 1))) &&
              !(a17 == 1))) {
    a7 = 1;
    a16 = 4;
    a8 = 13;
    a20 = 1;
    a17 = 1;
    return -1;
  } else if (((a12 == 8) &&
              ((input == 1) &&
               (((a21 == 1) && (((a8 == 15) && ((!(a17 == 1) && !(a7 == 1)) &&
                                                !(a20 == 1))) &&
                                (a16 == 6))) ||
                (!(a21 == 1) &&
                 ((a16 == 4) && ((a8 == 13) && (((a17 == 1) && (a7 == 1)) &&
                                                (a20 == 1))))))))) {
    a7 = 1;
    a17 = 1;
    a21 = 0;
    a20 = 1;
    a8 = 13;
    a16 = 5;
    return 26;
  } else if (((((!(a17 == 1) &&
                 (!(a7 == 1) &&
                  ((a21 == 1) && ((a8 == 15) && (input == 4))))) &&
                !(a20 == 1)) &&
               (a12 == 8)) &&
              (a16 == 4))) {
    a17 = 1;
    a16 = 5;
    return 21;
  } else if (((((((a16 == 6) && ((!(a20 == 1) && (!(a17 == 1) && !(a7 == 1))) &&
                                 (a8 == 15))) &&
                 (a21 == 1)) ||
                (((a16 == 4) &&
                  (((a20 == 1) && ((a17 == 1) && (a7 == 1))) && (a8 == 13))) &&
                 !(a21 == 1))) &&
               (input == 2)) &&
              (a12 == 8))) {
    a7 = 0;
    a20 = 1;
    a8 = 14;
    a16 = 4;
    a21 = 1;
    a17 = 0;
    return -1;
  } else if (((a8 == 13) &&
              (!(a21 == 1) &&
               ((((input == 3) &&
                  ((((a20 == 1) && !(a17 == 1)) && (a16 == 6)) ||
                   ((!(a20 == 1) && (a17 == 1)) && (a16 == 4)))) &&
                 (a12 == 8)) &&
                (a7 == 1))))) {
    a16 = 4;
    a17 = 1;
    a20 = 1;
    return 26;
  } else if (((((a21 == 1) &&
                ((a12 == 8) &&
                 ((input == 1) &&
                  (((!(a20 == 1) && (a17 == 1)) && (a16 == 4)) ||
                   (((a16 == 5) && (!(a17 == 1) && (a20 == 1))) ||
                    ((a16 == 6) && (!(a17 == 1) && (a20 == 1)))))))) &&
               !(a7 == 1)) &&
              (a8 == 15))) {
    a16 = 6;
    a20 = 1;
    a17 = 0;
    return 24;
  } else if ((((a16 == 5) &&
               (((a7 == 1) && ((!(a21 == 1) && ((a12 == 8) && (input == 3))) &&
                               (a8 == 13))) &&
                (a17 == 1))) &&
              (a20 == 1))) {
    a20 = 0;
    a8 = 15;
    a17 = 0;
    a21 = 1;
    return -1;
  } else if (((a17 == 1) &&
              (((a8 == 15) &&
                (((a12 == 8) && ((!(a7 == 1) && (input == 5)) && (a21 == 1))) &&
                 !(a20 == 1))) &&
               (a16 == 5)))) {
    a20 = 1;
    a8 = 13;
    a7 = 1;
    a16 = 4;
    return -1;
  } else if ((!(a7 == 1) && (((((a21 == 1) && (((a8 == 15) && (input == 5)) &&
                                               !(a17 == 1))) &&
                               (a12 == 8)) &&
                              (a20 == 1)) &&
                             (a16 == 4)))) {
    a8 = 13;
    a17 = 1;
    a7 = 1;
    return -1;
  } else if (((!(a21 == 1) &&
               (((a12 == 8) && ((((a16 == 6) && ((a20 == 1) && !(a17 == 1))) ||
                                 ((!(a20 == 1) && (a17 == 1)) && (a16 == 4))) &&
                                (input == 1))) &&
                (a8 == 13))) &&
              (a7 == 1))) {
    a16 = 6;
    a20 = 1;
    a17 = 0;
    return -1;
  } else if (((a17 == 1) &&
              (!(a7 == 1) &&
               (((a21 == 1) && (((a12 == 8) && ((input == 5) &&
                                                ((a16 == 5) || (a16 == 6)))) &&
                                (a20 == 1))) &&
                (a8 == 15))))) {
    a7 = 1;
    a16 = 4;
    a8 = 13;
    return -1;
  } else if ((((a12 == 8) &&
               (!(a21 == 1) &&
                ((a7 == 1) &&
                 ((a8 == 13) &&
                  ((input == 6) && ((((a16 == 6) && (a17 == 1)) ||
                                     ((a16 == 4) && !(a17 == 1))) ||
                                    ((a16 == 5) && !(a17 == 1)))))))) &&
              (a20 == 1))) {
    a8 = 15;
    a17 = 0;
    a21 = 1;
    a20 = 0;
    a16 = 4;
    return -1;
  } else if ((((a16 == 5) &&
               ((((a8 == 15) && ((!(a7 == 1) && (input == 2)) && (a21 == 1))) &&
                 (a12 == 8)) &&
                !(a20 == 1))) &&
              !(a17 == 1))) {
    a16 = 4;
    a17 = 1;
    return 24;
  } else if ((!(a20 == 1) &&
              ((a21 == 1) &&
               ((a16 == 4) &&
                ((a8 == 15) && (((a12 == 8) && ((input == 2) && !(a7 == 1))) &&
                                !(a17 == 1))))))) {
    a17 = 1;
    a16 = 5;
    return 21;
  } else if ((((a21 == 1) && (!(a7 == 1) && ((!(a20 == 1) &&
                                              (!(a17 == 1) &&
                                               ((a12 == 8) && (input == 6)))) &&
                                             (a16 == 4)))) &&
              (a8 == 15))) {
    a20 = 1;
    a16 = 6;
    return 22;
  } else if (((a17 == 1) &&
              ((((((a12 == 8) && ((input == 4) && (a8 == 13))) && (a20 == 1)) &&
                 !(a21 == 1)) &&
                (a16 == 5)) &&
               (a7 == 1)))) {
    a16 = 4;
    a17 = 0;
    return 25;
  } else if (((((a8 == 13) && ((a12 == 8) && ((((((a16 == 6) && (a17 == 1)) ||
                                                 (!(a17 == 1) && (a16 == 4))) ||
                                                (!(a17 == 1) && (a16 == 5))) &&
                                               (input == 1)) &&
                                              !(a21 == 1)))) &&
               (a20 == 1)) &&
              (a7 == 1))) {
    a8 = 15;
    a16 = 6;
    a21 = 1;
    a20 = 0;
    a7 = 0;
    a17 = 1;
    return -1;
  } else if (((a8 == 13) && (!(a21 == 1) &&
                             ((((((!(a17 == 1) && (a20 == 1)) && (a16 == 6)) ||
                                 ((a16 == 4) && ((a17 == 1) && !(a20 == 1)))) &&
                                (input == 5)) &&
                               (a7 == 1)) &&
                              (a12 == 8))))) {
    a17 = 1;
    a20 = 0;
    a16 = 4;
    return 25;
  } else if (((!(a21 == 1) &&
               ((((((a16 == 6) && ((a20 == 1) && !(a17 == 1))) ||
                   (((a17 == 1) && !(a20 == 1)) && (a16 == 4))) &&
                  (input == 4)) &&
                 (a7 == 1)) &&
                (a12 == 8))) &&
              (a8 == 13))) {
    a8 = 15;
    a21 = 1;
    a20 = 0;
    a7 = 0;
    a16 = 6;
    a17 = 0;
    return 26;
  } else if ((((a21 == 1) &&
               (!(a7 == 1) &&
                ((((((a16 == 5) && ((a20 == 1) && !(a17 == 1))) ||
                    ((!(a17 == 1) && (a20 == 1)) && (a16 == 6))) ||
                   ((a16 == 4) && ((a17 == 1) && !(a20 == 1)))) &&
                  (input == 4)) &&
                 (a12 == 8)))) &&
              (a8 == 15))) {
    a16 = 4;
    a20 = 0;
    a17 = 0;
    return 24;
  } else if (((((((a16 == 6) && ((!(a20 == 1) && (!(a17 == 1) && !(a7 == 1))) &&
                                 (a8 == 15))) &&
                 (a21 == 1)) ||
                (((a16 == 4) &&
                  ((((a7 == 1) && (a17 == 1)) && (a20 == 1)) && (a8 == 13))) &&
                 !(a21 == 1))) &&
               (input == 4)) &&
              (a12 == 8))) {
    a17 = 0;
    a16 = 5;
    a21 = 1;
    a8 = 14;
    a7 = 1;
    a20 = 1;
    return -1;
  } else if ((!(a17 == 1) &&
              (((a12 == 8) &&
                (!(a20 == 1) && (((a8 == 15) && ((a21 == 1) && (input == 4))) &&
                                 !(a7 == 1)))) &&
               (a16 == 5)))) {
    a17 = 1;
    return 24;
  } else if ((((!(a7 == 1) &&
                (((input == 2) &&
                  ((((a16 == 5) && ((a20 == 1) && !(a17 == 1))) ||
                    ((a16 == 6) && ((a20 == 1) && !(a17 == 1)))) ||
                   ((a16 == 4) && (!(a20 == 1) && (a17 == 1))))) &&
                 (a8 == 15))) &&
               (a12 == 8)) &&
              (a21 == 1))) {
    a17 = 0;
    a16 = 5;
    a20 = 1;
    return 25;
  } else if ((!(a20 == 1) && (((((((input == 6) && (a16 == 5)) && (a21 == 1)) &&
                                 !(a17 == 1)) &&
                                (a12 == 8)) &&
                               !(a7 == 1)) &&
                              (a8 == 15)))) {
    a17 = 1;
    return 24;
  } else if (((a12 == 8) &&
              (((((((a21 == 1) && (input == 5)) && (a8 == 15)) && (a17 == 1)) &&
                 !(a7 == 1)) &&
                !(a20 == 1)) &&
               (a16 == 6)))) {
    a20 = 1;
    a16 = 4;
    a7 = 1;
    a8 = 13;
    return -1;
  } else if (((((a8 == 15) &&
                (!(a7 == 1) &&
                 ((((!(a20 == 1) && (a17 == 1)) && (a16 == 4)) ||
                   (((!(a17 == 1) && (a20 == 1)) && (a16 == 5)) ||
                    ((a16 == 6) && ((a20 == 1) && !(a17 == 1))))) &&
                  (input == 6)))) &&
               (a12 == 8)) &&
              (a21 == 1))) {
    a20 = 0;
    a17 = 1;
    a16 = 4;
    return 22;
  } else if (((a8 == 15) &&
              ((a16 == 4) && (!(a20 == 1) &&
                              ((((a21 == 1) && (!(a17 == 1) && (input == 5))) &&
                                !(a7 == 1)) &&
                               (a12 == 8)))))) {
    a7 = 1;
    a8 = 13;
    a17 = 1;
    a20 = 1;
    return -1;
  } else if (((a17 == 1) &&
              ((a12 == 8) &&
               ((a8 == 15) && (((!(a7 == 1) && (((a16 == 5) || (a16 == 6)) &&
                                                (input == 2))) &&
                                (a21 == 1)) &&
                               (a20 == 1)))))) {
    a17 = 0;
    a16 = 6;
    return 22;
  } else if ((!(a7 == 1) &&
              (((a8 == 15) && ((!(a17 == 1) &&
                                ((a12 == 8) && ((input == 3) && (a21 == 1)))) &&
                               (a16 == 4))) &&
               (a20 == 1)))) {
    a17 = 1;
    a7 = 1;
    a8 = 13;
    return -1;
  } else if (((a16 == 5) &&
              ((!(a21 == 1) &&
                (((a8 == 13) && (((input == 2) && (a20 == 1)) && (a12 == 8))) &&
                 (a7 == 1))) &&
               (a17 == 1)))) {
    a21 = 1;
    a8 = 14;
    a16 = 4;
    a20 = 0;
    a7 = 0;
    a17 = 0;
    return -1;
  } else if (((a20 == 1) &&
              (((a12 == 8) &&
                ((a7 == 1) && ((a8 == 13) && (((!(a17 == 1) && (a16 == 5)) ||
                                               (((a17 == 1) && (a16 == 6)) ||
                                                (!(a17 == 1) && (a16 == 4)))) &&
                                              (input == 3))))) &&
               !(a21 == 1)))) {
    a8 = 14;
    a7 = 0;
    a17 = 1;
    a21 = 1;
    a16 = 4;
    return -1;
  } else if (((a12 == 8) &&
              ((a7 == 1) &&
               (!(a21 == 1) &&
                ((a8 == 13) &&
                 ((input == 6) &&
                  (((a16 == 6) && ((a20 == 1) && !(a17 == 1))) ||
                   ((a16 == 4) && ((a17 == 1) && !(a20 == 1)))))))))) {
    a20 = 0;
    a21 = 1;
    a17 = 0;
    a8 = 14;
    a16 = 4;
    return -1;
  } else if (((!(a7 == 1) &&
               (!(a17 == 1) &&
                ((((a16 == 4) && ((a8 == 15) && (input == 1))) && (a12 == 8)) &&
                 (a21 == 1)))) &&
              (a20 == 1))) {
    a7 = 1;
    a8 = 13;
    a17 = 1;
    return -1;
  } else if (((a17 == 1) &&
              (((a21 == 1) &&
                (!(a20 == 1) &&
                 ((a12 == 8) &&
                  ((a8 == 15) && (!(a7 == 1) && (input == 1)))))) &&
               (a16 == 6)))) {
    a20 = 1;
    a8 = 13;
    a7 = 1;
    a16 = 4;
    return -1;
  } else if (((a20 == 1) &&
              ((a12 == 8) &&
               ((((a17 == 1) && ((((a16 == 5) || (a16 == 6)) && (input == 4)) &&
                                 (a8 == 15))) &&
                 (a21 == 1)) &&
                !(a7 == 1))))) {
    a16 = 4;
    a7 = 1;
    a8 = 13;
    return -1;
  } else if (((((a8 == 13) && ((((!(a21 == 1) && (input == 6)) && (a20 == 1)) &&
                                (a12 == 8)) &&
                               (a17 == 1))) &&
               (a7 == 1)) &&
              (a16 == 5))) {
    a16 = 4;
    a20 = 0;
    return 25;
  } else if (((a16 == 5) && (((((a12 == 8) && (!(a7 == 1) && ((input == 2) &&
                                                              !(a20 == 1)))) &&
                               (a21 == 1)) &&
                              (a17 == 1)) &&
                             (a8 == 15)))) {
    a17 = 0;
    return 24;
  } else if ((((a12 == 8) && (((!(a17 == 1) &&
                                ((a21 == 1) && ((input == 4) && !(a7 == 1)))) &&
                               (a8 == 15)) &&
                              (a20 == 1))) &&
              (a16 == 4))) {
    a20 = 0;
    a17 = 1;
    a16 = 6;
    return 21;
  } else if (((a7 == 1) &&
              ((a8 == 13) &&
               ((a12 == 8) &&
                (!(a21 == 1) &&
                 ((input == 2) &&
                  ((((a20 == 1) && !(a17 == 1)) && (a16 == 6)) ||
                   (((a17 == 1) && !(a20 == 1)) && (a16 == 4))))))))) {
    a16 = 4;
    a20 = 0;
    a17 = 1;
    return -1;
  } else if ((((((((!(a20 == 1) && (!(a17 == 1) && !(a7 == 1))) &&
                   (a8 == 15)) &&
                  (a16 == 6)) &&
                 (a21 == 1)) ||
                ((((a8 == 13) && (((a17 == 1) && (a7 == 1)) && (a20 == 1))) &&
                  (a16 == 4)) &&
                 !(a21 == 1))) &&
               (input == 6)) &&
              (a12 == 8))) {
    a20 = 1;
    a8 = 13;
    a16 = 4;
    a7 = 0;
    a21 = 1;
    a17 = 0;
    return -1;
  } else if (((!(a7 == 1) &&
               (!(a17 == 1) &&
                (((((input == 3) && (a21 == 1)) && (a16 == 4)) && (a8 == 15)) &&
                 (a12 == 8)))) &&
              !(a20 == 1))) {
    a17 = 1;
    a7 = 1;
    a8 = 13;
    a20 = 1;
    return -1;
  } else if ((((((a12 == 8) &&
                 (((((a17 == 1) && !(a20 == 1)) && (a16 == 4)) ||
                   ((((a20 == 1) && !(a17 == 1)) && (a16 == 5)) ||
                    ((!(a17 == 1) && (a20 == 1)) && (a16 == 6)))) &&
                  (input == 3))) &&
                (a8 == 15)) &&
               (a21 == 1)) &&
              !(a7 == 1))) {
    a16 = 4;
    a17 = 1;
    a8 = 13;
    a20 = 1;
    a7 = 1;
    return -1;
  } else if ((((!(a7 == 1) &&
                (((input == 5) &&
                  ((((a16 == 5) && (!(a17 == 1) && (a20 == 1))) ||
                    ((a16 == 6) && ((a20 == 1) && !(a17 == 1)))) ||
                   ((a16 == 4) && (!(a20 == 1) && (a17 == 1))))) &&
                 (a12 == 8))) &&
               (a21 == 1)) &&
              (a8 == 15))) {
    a16 = 4;
    a17 = 1;
    a7 = 1;
    a20 = 1;
    a8 = 13;
    return -1;
  } else if (((!(a7 == 1) &&
               (((a21 == 1) && (((a17 == 1) && ((a12 == 8) && (input == 2))) &&
                                !(a20 == 1))) &&
                (a16 == 6))) &&
              (a8 == 15))) {
    a8 = 13;
    a20 = 1;
    a16 = 4;
    a7 = 1;
    return -1;
  } else if (((!(a17 == 1) &&
               ((a21 == 1) && ((!(a20 == 1) &&
                                ((a12 == 8) && ((input == 3) && !(a7 == 1)))) &&
                               (a8 == 15)))) &&
              (a16 == 5))) {
    a8 = 13;
    a16 = 4;
    return -1;
  } else if ((((a16 == 5) &&
               (!(a20 == 1) &&
                (((((input == 6) && (a21 == 1)) && (a17 == 1)) && !(a7 == 1)) &&
                 (a12 == 8)))) &&
              (a8 == 15))) {
    return 24;
  } else if ((!(a7 == 1) &&
              ((a17 == 1) &&
               (((a16 == 6) && (!(a20 == 1) && (((input == 6) && (a12 == 8)) &&
                                                (a21 == 1)))) &&
                (a8 == 15))))) {
    a7 = 1;
    a8 = 13;
    a20 = 1;
    a16 = 4;
    return -1;
  } else if (((((a21 == 1) &&
                ((a8 == 15) &&
                 ((a12 == 8) &&
                  (!(a7 == 1) && (!(a17 == 1) && (input == 2)))))) &&
               (a16 == 4)) &&
              (a20 == 1))) {
    a17 = 1;
    a8 = 13;
    a7 = 1;
    return -1;
  } else if (((a8 == 15) &&
              (((a16 == 4) &&
                ((a12 == 8) && ((!(a20 == 1) && (!(a7 == 1) && (input == 1))) &&
                                !(a17 == 1)))) &&
               (a21 == 1)))) {
    a16 = 6;
    a20 = 1;
    return 22;
  } else if (((a21 == 1) &&
              (((a12 == 8) && ((((a17 == 1) && ((input == 3) &&
                                                ((a16 == 5) || (a16 == 6)))) &&
                                !(a7 == 1)) &&
                               (a20 == 1))) &&
               (a8 == 15)))) {
    a17 = 0;
    a16 = 4;
    return 21;
  } else if ((!(a21 == 1) &&
              ((a20 == 1) &&
               (((a12 == 8) &&
                 ((a8 == 13) && ((((a16 == 5) && !(a17 == 1)) ||
                                  (((a17 == 1) && (a16 == 6)) ||
                                   (!(a17 == 1) && (a16 == 4)))) &&
                                 (input == 2)))) &&
                (a7 == 1))))) {
    a21 = 1;
    a8 = 15;
    a17 = 1;
    a7 = 0;
    a16 = 6;
    a20 = 0;
    return -1;
  } else if (((a7 == 1) && ((a12 == 8) &&
                            ((((a20 == 1) && (((!(a17 == 1) && (a16 == 5)) ||
                                               (((a17 == 1) && (a16 == 6)) ||
                                                ((a16 == 4) && !(a17 == 1)))) &&
                                              (input == 4))) &&
                              (a8 == 13)) &&
                             !(a21 == 1))))) {
    a8 = 15;
    a16 = 6;
    a21 = 1;
    a7 = 0;
    a20 = 0;
    a17 = 0;
    return 26;
  } else if (((a21 == 1) && ((((!(a7 == 1) && ((a8 == 15) && (!(a20 == 1) &&
                                                              (input == 4)))) &&
                               (a17 == 1)) &&
                              (a16 == 5)) &&
                             (a12 == 8)))) {
    return 24;
  } else if ((((!(a7 == 1) && ((!(a20 == 1) &&
                                ((a21 == 1) && ((input == 3) && (a17 == 1)))) &&
                               (a8 == 15))) &&
               (a12 == 8)) &&
              (a16 == 5))) {
    a20 = 1;
    a8 = 13;
    a7 = 1;
    a16 = 4;
    return -1;
  } else if (((((!(a17 == 1) &&
                 (!(a20 == 1) &&
                  ((a8 == 15) && ((input == 1) && (a16 == 5))))) &&
                (a12 == 8)) &&
               (a21 == 1)) &&
              !(a7 == 1))) {
    return -1;
  } else if (((((a21 == 1) &&
                ((a8 == 15) && (((a16 == 5) && ((a12 == 8) && (input == 1))) &&
                                (a17 == 1)))) &&
               !(a7 == 1)) &&
              !(a20 == 1))) {
    return 21;
  } else if (((!(a21 == 1) &&
               ((a20 == 1) &&
                ((((a8 == 13) && ((a7 == 1) && (input == 5))) && (a17 == 1)) &&
                 (a12 == 8)))) &&
              (a16 == 5))) {
    a21 = 1;
    a7 = 0;
    a17 = 0;
    a8 = 14;
    a20 = 0;
    return -1;
  } else if ((((!(a7 == 1) &&
                ((a21 == 1) && ((((input == 6) && (a20 == 1)) && (a8 == 15)) &&
                                !(a17 == 1)))) &&
               (a12 == 8)) &&
              (a16 == 4))) {
    a7 = 1;
    a8 = 13;
    a17 = 1;
    return -1;
  } else if (((((a20 == 1) &&
                (((!(a21 == 1) && ((a7 == 1) && (input == 1))) && (a8 == 13)) &&
                 (a17 == 1))) &&
               (a12 == 8)) &&
              (a16 == 5))) {
    a21 = 1;
    a16 = 6;
    a7 = 0;
    return -1;
  } else if (((a12 == 8) &&
              ((input == 5) &&
               ((((((!(a17 == 1) && !(a7 == 1)) && !(a20 == 1)) &&
                   (a8 == 15)) &&
                  (a16 == 6)) &&
                 (a21 == 1)) ||
                (!(a21 == 1) &&
                 ((a16 == 4) && (((a20 == 1) && ((a7 == 1) && (a17 == 1))) &&
                                 (a8 == 13)))))))) {
    a20 = 0;
    a21 = 1;
    a8 = 14;
    a17 = 0;
    a16 = 5;
    a7 = 1;
    return -1;
  }

  return -2;
}

int input, output;
int main() {
  wcet = 0;
  // default output
  output = -1;

  // main i/o-loop
  int symb[BOUND];
  #ifdef LLBMC
  for (int i = 0; i < BOUND; ++i) {
      symb[i] = __llbmc_nondef_int();
  }
  #else
  klee_make_symbolic(symb, sizeof(int) * BOUND, "symb");
  #endif

  for (int FLAG = 0; FLAG < BOUND; FLAG++) {

    // operate eca engine
    output = calculate_output(symb[FLAG]);
  }

  tracerx_check();

  return 0;
}
