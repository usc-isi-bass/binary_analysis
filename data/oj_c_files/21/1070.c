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
	int n,i,j;
	double aver,a[310],b[310],sum=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i],sum=sum+a[i];
	aver=sum/n;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
			double t;
			t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
	for(i=0;i<n;i++)
		b[i]=abs(a[i]-aver);
	double max=0;
	for(i=0;i<n;i++)
		if(b[i]>max)
			max=b[i];
	int c[300],k=0;
	for(i=0;i<n;i++)
		if(b[i]==max)
            c[k]=i,k++;
	cout<<a[c[0]];
   for(i=1;i<k;i++)
	   cout<<','<<a[c[i]];
   cout<<endl;
   return 0;

}