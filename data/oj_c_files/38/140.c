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

int main( )
{
	int k;
	cin>>k;
	while(k>0)
	{
		int n,i;
		double a[100];
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i];
		double *p=a;
		double s1=0,s2=0,s3;
		for(i=0;i<n;i++)
			s1=s1+*(p+i);
		s1=s1/n;
		for(i=0;i<n;i++)
			s2=pow(*(p+i)-s1,2.0)+s2;
		s2=s2/n;
		s3=sqrt(s2);
		printf("%.5f\n", s3);
		cout<<'\n';
		k--;
	}
	return 0;
}

