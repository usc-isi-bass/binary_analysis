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
	int n,i;
	double a[100],b[100],standard,c[100];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>b[i]>>a[i];
	standard=a[0]/b[0];
	for(i=1;i<n;i++)
		c[i]=a[i]/b[i];
	for(i=1;i<n;i++)
	{
		if(standard-c[i]>0.05)
			cout<<"worse"<<endl;
		if(standard-c[i]<-0.05)
			cout<<"better"<<endl;
		if(standard-c[i]>-0.05&&standard-c[i]<0.05)
			cout<<"same"<<endl;
	}
	return 0;
}


