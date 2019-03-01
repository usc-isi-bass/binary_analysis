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

void main()
{
	int reverse(int num);
	int num,n,i,t;
	for(i=0;i<=5;i++)
	{
	   scanf("%d",&num);
	   if(num>0||num==0)
	   {
	      n=reverse(num);
		  printf("%d\n",n);
	   }
	   else if(num<0)
	   {
		   t=0-num;
		   n=reverse(t);
		   t=0-n;
		   printf("%d\n",t);
	   }

	}
}
int reverse(int num)
{
	int w;
	w=num %10; //????????
		num/=10;
		while(num>0)
		{
			w=(num%10)+w*10;
			num/=10;
		}

	return w;
}