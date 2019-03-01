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
	cin>>n;
	double a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int j=0;j<n;j++)
	{
		a[j]=b[j]/a[j];
	}
	for(int k=1;k<n;k++)
	{
		if((a[k]-a[0])>0.05)
			cout<<"better"<<endl;
		if((a[k]-a[0])<-0.05)
			cout<<"worse"<<endl;
		if(abs(a[k]-a[0])<=0.05)
			cout<<"same"<<endl;
	}
	return 0;
}

