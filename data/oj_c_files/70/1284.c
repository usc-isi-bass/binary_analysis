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
		double z,x[1000],y[1000];
		cin>>n;
		for (int i=1;i<=n;i++) cin>>x[i]>>y[i];

		for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
				if ((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])>z)
				z=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
		  	cout<<fixed<<setprecision(4)<<sqrt(z);
cin>>n;}
