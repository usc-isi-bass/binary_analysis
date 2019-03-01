#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main()
{
  char origin[30000];
  gets(origin);
  
  int i, total=0, first=1;
  
  for (i=0; origin[i]; i++) {
    if (origin[i]!=' ') {
      ++total;
    } else {
      if (origin[i-1]!=' ') {
        if (first==1) {
          printf("%d", total);
          first=0;
        } else {
          printf(",%d", total);
        }
      }
      total=0;
    }
  }
  
  if (first==1) {
    printf("%d",total);
  } else {
    printf(",%d",total);
  }
  return 0;
}