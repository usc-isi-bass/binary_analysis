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
	double n,s=0,average=0,t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		s=0;
		average=0;
	cin>>n;
	double x[1000],*p;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	p=x;
	for(int i=0;i<n;i++)
	{
		average=average+*(p+i);
	}
	average=average/n;
	for(int i=0;i<n;i++)
	{
		s=s+(*(p+i)-average)*(*(p+i)-average);
	}
	s=s/n;
	s=sqrt(s);
	cout<<fixed<<setprecision(5)<<s<<endl;
	}
	return 0;
}