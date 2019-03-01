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

double cal(int i,int n,double x)
{ double s;
  if (i==n)  return x;
  else{ s=1+1/cal(i+1,n,x);return s;}//1+1/cal(i+1,n,x);
}
int main()
{
	

	double x;int i,j,k,l, m,n,y;
   scanf("%d",&m);
   for (i=1;i<=m;i++)
   {scanf("%d",&y);
    x=0;for (j=0;j<=y-1;j++) x+=cal(0,j,2.0);
	printf("%.3lf\n",x);}

 
}
