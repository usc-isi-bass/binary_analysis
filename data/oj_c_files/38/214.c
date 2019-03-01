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
	for(int i=0;i<=k-1;i++)
	{
	double n;
	cin>>n;
	double a[100],sum=0,pingjun,sum1=0;
	for(int s=0;s<=n-1;s++)
	{
		cin>>a[s];
	}
	
	
	for(int s=0;s<=n-1;s++)
		
	{
		sum=sum+a[s];
	
	}
	pingjun=sum/n;
	for(int s=0;s<=n-1;s++	)
	{
		sum1=sum1+(a[s]-pingjun)*(a[s]-pingjun);
	}
	cout<<fixed<<setprecision(5)<<sqrt((1/n)*sum1)<<endl;
	}
return 0;
}

