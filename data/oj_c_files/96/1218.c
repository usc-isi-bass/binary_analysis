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
   int len,i,j,a[100],b[100];
   char c[100];
   gets(c);
   len=strlen(c);
   for(i=0;i<len;i++)
     a[i]=c[i]-'0';
   if(len==1)
      printf("0\n%d",a[0]);
   if(len==2&&(a[0]*10+a[1])<13)
     printf("0\n%d",a[0]*10+a[1]);
   for (i=1;i<len;i++)
    {
      b[i]=(a[i-1]*10+a[i])/13;
      a[i]=(a[i-1]*10+a[i])%13;
    }
   for (i=1;i<len;i++)
     {
       if(i==1&&b[i]==0)
         continue;
       else
         printf("%d",b[i]);
       if(i==len-1)
         printf("\n%d",a[len-1]);
     }
}