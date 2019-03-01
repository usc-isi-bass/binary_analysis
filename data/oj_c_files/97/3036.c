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
	int n,x[6],i,y[6]={100,50,20,10,5,1};
	scanf("%d",&n);
	for(i=0;i<=5;i++)
	{x[i]=n%y[i];
	 x[i]=(n-x[i])/y[i];
	 n=n-x[i]*y[i];}
	for(i=0;i<=5;i++)
		printf("%d\n",x[i]);
  return 0; 

}