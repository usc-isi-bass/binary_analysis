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
  char origin[256], sub[256], replace[256], after[256];
  scanf("%s%s%s", origin, sub, replace);
  
  int i, j, k=0;
  
  for (i=0; origin[i]; i++) {
    int shouldChange=1;
    for (j=0; sub[j]; j++) {
      if (origin[i+j]!=sub[j]) {
        shouldChange=0;
      }
    }
    if (shouldChange==1) {
      strcpy(after, origin);
      after[i]=0;
      strcat(after, replace);
      strcat(after, &origin[i+strlen(sub)]);
      strcpy(origin, after);
      i+=strlen(replace);
      break;
    }
  }
  printf("%s", origin);
  return 0;
}