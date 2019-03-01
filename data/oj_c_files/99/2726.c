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
{  int a[100],n,i;
   double s1=0,s2=0,s3=0,s4=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {if(a[i]<=18)
      s1=s1+1;
   else if(a[i]>=19&&a[i]<=35)
	   s2=s2+1;
   else if(a[i]>=36&&a[i]<=60)
	   s3=s3+1;
   else s4=s4+1;
   }
   printf("1-18: %.2lf%%\n",s1/n*100);
   printf("19-35: %.2lf%%\n",s2/n*100);
   printf("36-60: %.2lf%%\n",s3/n*100);
   printf("60??: %.2lf%%\n",s4/n*100);


	return 0;
}
