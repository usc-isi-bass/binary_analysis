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
	int f(int,int);
	int n,a;
	cin>>n;
	while(n--)
	{
		cin>>a;
		cout<<f(a,a)<<endl;
	}
	return 0;
}
int f(int m,int k)
{
	int i,sum=0;
	if(m==1) sum=1;
	for(i=m;i>1;i--)
	{  
		if(m%i==0&&i<=k)
			sum+=f(m/i,i);}
	return sum;
}