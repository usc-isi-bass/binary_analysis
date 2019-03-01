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

//???????????
int main()
{
	int k,n,i,j;
	double x[1000],*p,average,s;
	p=&x[0];
	cin>>k;
	for (i=0;i<k;i++)
	{
		s=0.0;
		average=0.0;
		cin>>n;
		for (j=0;j<n;j++)
		{
			cin>>*(p+j);
			average+=(*(p+j))/n;//???
		}
		for (j=0;j<n;j++)
			s+=((*(p+j))-average)*((*(p+j))-average)/n;
		s=sqrt(s);//???
		printf("%.5f\n", s);
	}
	return 0;
}