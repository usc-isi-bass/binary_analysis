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
    int i=0,j=0,length1=0,length2=0;
    char str1[50],str2[50];
    scanf("%s%s",str1,str2);
    length1 = strlen(str1);
    length2 = strlen(str2);
    for(i=0;i<length2;i++)
    {
         for(j=0;j<length1;j++)
         {
              if(str1[j] != str2[i+j])
              break;
              printf("%d",i);
              exit(0);
          }
     }
    return 0;
}
