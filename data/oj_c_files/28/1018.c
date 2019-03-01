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
{       char a[1000],*aa[1000];
        int b[1000];
        int i,n=0;
        gets(a);
        aa[n++]=a;
        for(i=0;a[i];i++)
        {
        if(a[i]==' ')
        {
                   a[i]=0;
                   aa[n++]=i+a+1;
                   }
                                 }
        for(i=0;i<n;i++)
        { if(i<n-1)
         {
         b[i]=strlen(aa[i]);
         if(b[i]>0)
         {
         printf("%d,",b[i]);
         }
         }
         else if(i==n-1)
         {    b[i]=strlen(aa[i]);
         if(b[i]>0)
         {
                  printf("%d",b[i]);
                  }
         }              
         }
           return 0;
}
