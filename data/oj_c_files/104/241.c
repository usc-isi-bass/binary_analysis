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

int s(int a,int b)
{
	int p,q;
	if(a>b)
	{
		p=a;q=b;
	}
	else
	{
		p=b;q=a;
	}
	p=p/2;
	if(p==q)return p;
	else s(p,q);
}
int main()
{
	int m,n,re;
	cin>>m>>n;
	if(m==n)cout<<m;
	else
	{
		re=s(m,n);
		   cout<<re<<endl;
	}
	return 0;
}
