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

main()
{
   char str[100000];
   int a[300]={0};
   int i,j,k;
   gets(str);
   i=0;
   for(j=0;str[j]!='\0';j++)
      {
         if(str[j]!=' ')
         a[i]++;
         if(str[j]==' '&&str[j+1]!=' '&&str[j+1]!='\0')
         i++;
      }
   for(k=0;k<i;k++)
   printf("%d,",a[k]);
   printf("%d",a[i]);
}