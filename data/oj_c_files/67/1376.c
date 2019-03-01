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
   int n,i;
   double a[10000],b[10000],c[10000];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
	{
     scanf("%lf %lf",&a[i],&b[i]);
     c[i]=b[i]/a[i];
    }
    for(i=1;i<n;i++)
	{
     if((c[i]-c[0]<=0.05)&&(c[i]-c[0]>=-0.05)) 
	 {
        printf("same\n");
     }
     if(c[i]-c[0]>0.05)
	 {
        printf("better\n");
     }
     if(c[i]-c[0]<-0.05)
	 {
        printf("worse\n");
     }
    }
 return 0;
}
