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
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	for(i=0;i<7;i++)
	{
	  if((n+i)%7==5)
	  {
	    n=(1+i)%7;//??????
	    break;
	  }
	}
	//printf("first Friday=%d\n",n);
	int e=13;
	for(i=0;i<12;i++)
	{
	  e=e+m[i];
	  //printf("%d\n",e);
	  if(e%7==n)
	  {
	    printf("%d\n",i+1);
	  }
	}

	return 0;
}