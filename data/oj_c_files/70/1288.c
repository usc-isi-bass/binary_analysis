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

int main ()
{
	int n;
	cin >> n;
	double x[100],y[100],s=0;
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2)>s)  s=pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2);
	cout<<fixed<<setprecision(4)<<sqrt(s)<<endl;
	return 0;
}
