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
	float a[300];
	int i,n;
	float max,min;
	float aver;
	float sum=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	for(i=0;i<n;i++)
		sum=sum+a[i];
	aver=sum/n;
	if((max+min)/2==aver)
		cout<<min<<","<<max;
	if((max-aver)>(aver-min))
		cout<<max;
	if((max-aver)<(aver-min))
		cout<<min;
	return 0;
}