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
	int k,n;
	double x[1000],a,s;
	cin>>k;
	while (k--)
	{
		cin>>n;
		a=0; s=0;
		for (int i=0;i<n;i++)
		{
			cin>>x[i];
			a=a+x[i];
		}
		a=a/n;
		for (int i=0;i<n;i++)
			s=s+(x[i]-a)*(x[i]-a);
		s=s/n;
		s=sqrt(s);
		printf("%.5f\n",s);
	}
	return 0;
}