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

int main ()
{
	int w,i,flag=0,j=0,a=0;
	int b[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	int c[12];
	scanf("%d",&w);
	if((w>7)||(w<1))
		printf("Error!");
	else
	{ for(i=0;i<12;i++)
	{a=a+b[i];
	   if((w+12+a)%7==5)
	     {flag++;
	      c[j]=i;
		  j++;}}
	  for(i=0;i<j;i++)
		  printf("\n%d",c[i]+1);
	}
	return 0;
}
