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
	double A[100],ave,s=0;
	cin>>k;
	for(int j=0;j<k;j++)
	{s=0;
		double *p=&A[0];
		ave=0;
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
		    ave+=A[i];
		}
		ave=ave/n;
		for(int i=0;i<n;i++)
		{
			s+=(A[i]-ave)*(A[i]-ave);
			
		}
		s=sqrt(s/n);
		cout<<fixed<<setprecision(5)<<s;;
		cout<<endl;
	}
	return 0;
}