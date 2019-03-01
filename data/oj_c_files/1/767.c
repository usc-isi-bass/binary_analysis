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

int divide(int n,int j)
{
	int sum=1,i,s,p,k;
	s=sqrt(n);
	for(i=j;i<=s;i++)
	{
		if (n%i==0)
		{
			p=n/i;
            k=i;
			sum=sum+divide(p,i);
		}
	}
	return sum;
}
int main()
{
	int n;
	cin>>n;
	int k,m,p;
	for(k=0;k<n;k++)
	{
		cin>>m;
		p=divide(m,2);
		cout<<p<<endl;
	}
	return 0;
}




		