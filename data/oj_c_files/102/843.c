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
	double a[40],c[40],k;
	double temp;
	char b[40];
	int len1=0,len2=0;
	cin>>n;
	//cout<<n<<"m"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>b>>k;
		if(b[0]=='f')
			a[len1++]=k;
		else c[len2++]=k;
	}
	for(int i=0;i<len1-1;i++)
		for(int j=0;j<len1-1-i;j++)
			{
				if(a[j]<a[j+1])
				{
				    temp=a[j];a[j]=a[j+1];a[j+1]=temp;
				}
			}
	for(int i=0;i<len2-1;i++)
				for(int j=0;j<len2-1-i;j++)
				{
					if(c[j]>c[j+1])
					{
						temp=c[j];c[j]=c[j+1];c[j+1]=temp;
					}
				}

	for(int i=0;i<len2;i++)
		cout<<fixed<<setprecision(2)<<c[i]<<" ";
	for(int i=0;i<len1;i++)
		{if(i==0)
			cout<<a[i];
		else cout<<fixed<<setprecision(2)<<" "<<a[i];}
	return 0;
}
