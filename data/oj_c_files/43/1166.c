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

int prime(int a);
int main()
{
	int i=3,m,d;
	cin>>m;
	for(i=3;i<=m/2;i+=2)
	{
		if(prime(i)!=0)
		{
			d=m-i;
			if(prime(d)!=0)
			{
				cout<<i<<" "<<d<<endl;
			}
		}
	}
	return 0;
}

int prime(int a)
{
	int e=1,i=3;
	if(a<7)
		a+=8;
	else
		if(a==7)
			return 1;
	for(i=3;i<=sqrt(a*1.0);i+=2)
	{
		e*=a%i;
		if(e!=0)
			e=1;
	}
	if(e!=0)
		return 1;
	else
		return 0;
}