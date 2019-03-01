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
	int i,j,k;
	cin>>k;
	for(i=0;i<k;i++)
	{
		int n;
		double a[100],average=0,s=0,sum=0;
		cin>>n;
		for(j=0;j<n;j++)
		cin>>a[j];
		for(j=0;j<n;j++)
		sum+=a[j];
		average=sum/n;
		for(j=0;j<n;j++)
		s+=(a[j]-average)*(a[j]-average);
		s=sqrt(s/n);
		cout<<fixed<<setprecision(5)<<s<<endl;
	}
	return 0;
}
