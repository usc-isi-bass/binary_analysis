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
	double x[100];
	int k;
	cin>>k;
	while(k>0)
	{
		double n;
		cin>>n;
		int i;
		double sum=0,ave,result,s=0;
		for(i=0;i<n;i++)
		{
			cin>>x[i];
			sum+=x[i];
		}
		ave=sum/n;
		for(i=0;i<n;i++)
			s=s+(x[i]-ave)*(x[i]-ave);
		result=sqrt(s/n);
		cout<<fixed<<setprecision(5)<<result<<endl;
		k--;
	}
	return 0;
}