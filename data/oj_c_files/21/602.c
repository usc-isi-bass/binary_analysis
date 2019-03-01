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

//********************************
//* ??? ?????                      
//* ?????                   *
//********************************
int main()
{
	int n;
	cin>>n;
	int a[301]={0};
	int i,j,temp=0;
	double t=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		t+=a[i];
	}
	double avrage=t/n;
	double b[301]={0};
	for(i=0;i<n;i++)
		b[i]=fabs(a[i]-avrage);
	t=0;
	double c[301]={0};
	int k=0;
	for(i=0;i<n;i++)
		if(b[i]>t)
			t=b[i];
	for(i=0;i<n;i++)
		if(b[i]==t)
		{
			c[k]=a[i];
			k++;
		}
	for(i=1;i<=k-2;i++)
		for(j=0;j<=k-1-i;j++)
		{
			if(c[j]>c[j+1])
			{
				t=c[j];
				c[j]=c[j+1];
				c[j+1]=t;
			}
		}
		for(i=0;i<k;i++)
		{
			if(i==0)
				cout<<c[i];
			else
				cout<<","<<c[i];
}
	return 0;
}