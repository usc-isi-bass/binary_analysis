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

int f(int a,int b)
{
	int m,i,c[1000];
	for(i=1;i<=a;i++)
	c[i]=0;
        c[a]=b;
	do
	{
		c[a]=c[a]+a;
	for(i=a-1;i>=1;i--)
	{
		if(c[i+1]%(a-1)!=0) break;
		else c[i]=c[i+1]*a/(a-1)+b;
	}
	}
	while(i>=1);
        m=c[1];
	return(m);
}
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<f(n,k);
	return 0;
}
