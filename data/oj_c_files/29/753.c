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
	int m,n,i,j,a=2,b=1,c;
	double sum=2.0;
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>n;
		for(j=1;j<n;j++)
		{
			c=b;
			b=a;
			a=a+c;
			sum=sum+a*1.0/b;
		}
		cout<<fixed<<setprecision(3)<<sum<<endl;
		a=2,b=1,sum=2.0;
	}
	return 0;
}