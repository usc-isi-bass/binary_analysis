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
	int n,i,m,j;
	double a[1001],*p=NULL,s=0,ss=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		p=a;
		cin>>m;
		for(j=0;j<m;j++)
		{
			cin>>*(p+j);
			s+=*(p+j);
		}
		s/=m;
		for(j=0;j<m;j++)
		{
			ss+=pow(*(p+j)-s,2);
		}
		ss/=m;
		ss=sqrt(ss);
		printf("%.5lf\n",ss);
		s=0;ss=0;
	}
	return 0;
}