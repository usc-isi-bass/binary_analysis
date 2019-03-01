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
 
int PrimeElement(int n,int m);
 
int n,m,i,k,t; 
m=2; 
scanf("%d",&k);
for(i=0;i<k;i++)
{
	scanf("%d",&n);
	t=PrimeElement(n,m);
	printf("%d\n",t);
}
}

int PrimeElement(int n,int m) 
{ 
int i,t; 
t=0;
for (i=m;i <=sqrt((double)(n));i++) 

{
	if (n % i == 0) 
			t = t + PrimeElement(n / i, i);
}
t = t + 1;
return t;
}