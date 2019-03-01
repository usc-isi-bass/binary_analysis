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
	int a[100],b[100],c,d,n,i;
	double x,y[100];
	cin>>n>>c>>d;
	x=d*1.0/c;
	for (i=0;i<n-1;i++)
	{
		cin>>a[i]>>b[i];
		y[i]=b[i]*1.0/a[i];
	}
	for (i=0;i<n-1;i++)
	{
		if (y[i]-x>0.05) cout<<"better";
		else {if (x-y[i]>0.05) cout<<"worse";
		      else cout<<"same";}
		if (i!=n-2) cout<<endl;
	}
	return 0;
}