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
	int n,i=1,x,t,y,sum,num;
	scanf("%d\n",&n);
	scanf("%d\n",&x);
	sum=x;num=-1000000;
	while(i<n)
	{	scanf("%d\n",&t);
	if(sum<t)
	{	y=sum;sum=t;
	  if(t>num)
		  num=y;}
	else
		if(num<t)
		  num=t;
		i++;
	}
	printf("%d\n",sum);
	printf("%d\n",num);
}
