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
	int n,m;
	double x[1010],sum,a,s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		sum=0;s=0;a=0;
		for(int j=0;j<m;j++)
		{
			cin>>*(x+j);
			sum=sum+*(x+j);
		}
		a=sum/m;
		for(int j=0;j<m;j++)
		{
			s=s+pow(*(x+j)-a,2);
		}
		s=s/m;s=sqrt(s);
		cout<<fixed<<setprecision(5)<<s<<endl;
	}
	return 0;
}