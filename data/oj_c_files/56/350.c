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
	int a,b,i,k,n,t;
	scanf("%d",&a);
	n=1;
	for(t=1;t<=a;t++)
	{k=a/10;
	if(k>0)
		n=n+1;}
	for(i=1;i<=n;i++)
	{
	b=a%10;
	a=a/10;
	if(b!=0)
	printf("%d",b);}
	return 0;
}

