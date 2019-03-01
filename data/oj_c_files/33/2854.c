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
   int n;
   int i, j;
   char string[256];
 
   scanf("%d\n", &n);
   for(i = 0; i < n ; i++)
   {
       gets(string);
       for(j = 0; j < strlen(string); j++)
       {
          if(string[j] == 'A')
            printf("T");
          else if(string[j] == 'T')
            printf("A");
          else if(string[j] == 'G')
            printf("C");
          else if(string[j] == 'C')
            printf("G");
       }
       printf("\n");
    }
  return 0;
}

