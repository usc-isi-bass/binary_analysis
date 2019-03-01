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
	double m=1.0,w=2.0,k=0.0,h,sum=0,n;
	int a[100]={0},i,j;
    cin>>n;
	for (i=1;i<=n;i++)
		{
	      cin>>a[i];
		}
	for (i=1;i<=n;i++)
		{
          h=a[i];
		  for (j=1;j<=h;j++)
			{
             sum+=w/m;
			 k=m;
			 m=w;
			 w=k+w;
			}
		  cout<<fixed<<setprecision(3)<<sum<<endl;
		  sum=0,m=1.0,w=2.0,k=0.0;
		}
	return 0;
}