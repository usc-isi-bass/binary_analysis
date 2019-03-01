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
	int k;
	cin>>k;
	while(k--)
	{
		int n;
		double sum1=0,sum2=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			double a;
			cin>>a;
			sum1+=a;
			sum2+=a*a;
		}
		double result=0;
		double average=sum1/n;
		result+=sum2+n*average*average-2*average*sum1;
		result=result/n;
		result=sqrt(result);
		cout<<fixed<<setprecision(5)<<result<<endl;
	}
	return 0;
}
