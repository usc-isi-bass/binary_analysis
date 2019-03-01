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
	int n;
	cin>>n;
	double x[50],y[50],max=0;
	for(int i=0;i<n;++i)
	{
		cin>>x[i]>>y[i];

	}
	for(int i=0;i<n;++i)
		for(int j=i+1;j<n;++j)
		{
			double m=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
			if(m>max)
			{
				max=m;
			}

		}
		cout<<fixed<<setprecision(4)<<max;
	return 0;
}
