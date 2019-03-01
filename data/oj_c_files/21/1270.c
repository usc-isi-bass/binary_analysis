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
	int n,t=0;
	int a[300],x[300];
	double p,m,b[300],s=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		s+=a[i];
	p=s/n;
	for(int i=0;i<n;i++)
		b[i]=fabs(a[i]-p);
	m=b[0];
	for(int i=0;i<n;i++)
		if(b[i]>m)
			m=b[i];
	for(int i=0;i<n;i++)
		if(b[i]==m)
			x[t++]=a[i];
	for(int i=0;i<t-1;i++)
		cout<<x[i]<<",";
	cout<<x[t-1]<<endl;
}
