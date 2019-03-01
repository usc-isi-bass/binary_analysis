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
{	int q=0;
	int k=0;
	int n=0;
	int i=0;
	double x[100];
	double y[100];
	double s[100];
	double Max=0.0;
	double Maxx=0.0;
	cin>>n;
	for (q=0;q<n;q++)
	{cin>>x[q]>>y[q];}
	for (q=0;q<n;q++)
	{for (i=0;i<n;i++)
	{s[i]=sqrt((x[i]-x[q])*(x[i]-x[q])+(y[i]-y[q])*(y[i]-y[q]));
	if(s[i]>Max)
	{Max=s[i];}
	if(Maxx<Max)
	{Maxx=Max;}}
	}
	cout<<Maxx<<endl;
	
return 0;
}
