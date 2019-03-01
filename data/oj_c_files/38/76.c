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
	int n,i,j,s;
	double x[100],w,sum,a;
	cin>>n;
	for(j=1;j<=n;j++)
	{
		cin>>s;
		sum=0.0;
		for(i=0;i<s;i++)
		{
			cin>>x[i];
			sum=sum+x[i];
		}
		a=sum/s;
		sum=0.0;
		for(i=0;i<s;i++)
		{
			sum=sum+(x[i]-a)*(x[i]-a);
		}
		cout<<fixed<<setprecision(5)<<sqrt(sum/s)<<endl;
	}
	return 0;
}