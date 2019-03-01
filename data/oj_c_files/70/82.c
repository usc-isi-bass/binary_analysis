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
	struct tops
	{
		double x;
		double y;
	}tops[100];
	double a,b;
   int n;
   scanf("%d",&n);
   int i,j;
   double dis1;
   double dis2=0.0;
   for(i=1;i<=n;i++)
   {
	   scanf("%lf %lf",&a,&b);
	   tops[i].x=a;
	   tops[i].y=b;
	   
	   for(j=1;j<=i;j++)
	   {
	   dis1=sqrt((tops[i].x-tops[j].x)*(tops[i].x-tops[j].x)+(tops[i].y-tops[j].y)*(tops[i].y-tops[j].y));
	   if(dis1>dis2)
	   {
		  dis2=dis1;
	   }
	   }
   }
   printf("%.4lf",dis2);
   return 0;
}

