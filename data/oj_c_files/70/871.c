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
	double a[999];
	double b[999];
	int k;
	cin>>k;
	double max=0;
	int i;
	for(i=0;i<=k-1;i++)
	{
		cin>>a[i];
	    cin>>b[i];
	}
	int j,m;
	double p;
	for(j=0;j<=k-1;j++)
		for(m=0;m<=k-1;m++)
		{
			p=sqrt((a[j]-a[m])*(a[j]-a[m])+(b[j]-b[m])*(b[j]-b[m]));
			if(p>max)
				max=p;
		}
	cout<<max<<endl;
	return 0;
}
