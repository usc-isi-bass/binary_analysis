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

int compare(const void *a ,const void * b)
{
	return *(int *)a-*(int *)b;
}
int main()
{
	unsigned int n;
	int a[300];
	double sum=0,avg;
	int i;

	cin>>n;

	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	qsort(a,n,sizeof(int),compare);
	avg=sum/n;
	
	if(fabs(fabs(a[0]-avg)-fabs(a[n-1]-avg))<1*1e-5)
	{
		cout<<a[0]<<","<<a[n-1]<<endl;
		return 0;
	}

	if(fabs(a[0]-avg)-fabs(a[n-1]-avg)>1*1e-5)
		cout<<a[0]<<endl;
	else
		cout<<a[n-1]<<endl;
}

