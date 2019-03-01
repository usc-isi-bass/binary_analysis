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
	int x,a[200],b[200],c[200],f[200],g[200],h[200],i,j;
	int d[12]={3,0,3,2,3,2,3,3,2,3,2,3};
	int e[12]={3,1,3,2,3,2,3,3,2,3,2,3};
	cin>>x;
	for(i=0;i<x;i++)
		cin>>a[i]>>b[i]>>c[i];
	for(i=0;i<x;i++)
		h[i]=0;
	for(i=0;i<x;i++)
		{
			if(b[i]>c[i])
			{
				f[i]=b[i];
				g[i]=c[i];
			}
			else
			{
				g[i]=b[i];
				f[i]=c[i];
			}
	}
	for(i=0;i<x;i++)
	for(j=g[i]-1;j<f[i]-1;j++)
	{
		if((a[i]%4==0&&a[i]%100!=0)||a[i]%400==0)
		h[i]=h[i]+e[j];
		else
		h[i]=h[i]+d[j];
	}
	for(i=0;i<x;i++)
	{
		if(h[i]%7==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}