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

int sushu(int N)
{
	if (N==2||N==3)
		return 1;
	else
	{
	int d=1,i;
	for(i=2;i<=sqrt(N);i++)
	{
		 d=N%i;
		 if (d==0)
		 {
			 return 0;
			 break;
		 }
	 }
     if (d!=0)
		 return 1;
	}
}
void main()
{
	int a,b;
	unsigned int n,t,i;
	scanf("%d",&n);
	for(t=6;t<=n;t=t+2)
	{
	   for(i=2;i<=t/2;i++)
	   {
		   a=sushu(i);
		   b=sushu(t-i);
		   if (a==1&&b==1)
		   {
			   printf("%d=%d+%d\n",t,i,t-i);
		       break;
		   }
	   }
	}
}