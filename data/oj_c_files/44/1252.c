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
   int num[6],i;
   for(i=0;i<6;i++)
	   scanf("%d",&num[i]);
   for(i=0;i<6;i++)
	   num[i]=reverse(num[i]);
   for(i=0;i<6;i++)
	   printf("%d\n",num[i]);
}

int reverse(int num)
{
	int i=0,n=0,flag;
	int a[100];
	if(num==0)
		num=0;
	else
    {
		if(num>0)
			flag=1;
		else
			flag=-1;
		num=abs(num);
	{
		while(num>0)
		{
			a[i]=num%10;
			i++;
			num=(num-num%10)/10;
			n++;
		}
		for(i=0;i<n;i++)
			num=num+a[i]*pow(10,n-i-1);
	}
		num=num*flag;
	}
	return(num);
}

