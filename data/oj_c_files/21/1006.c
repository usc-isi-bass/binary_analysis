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

const double MIN=0.000001;
int main()
{
	int n,number[301];
	int i,j,t;
	double sum=0,average;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>number[i];
		sum+=number[i];
	}
	average=sum/n;
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (number[i]>number[j])
			{
				t=number[i];
				number[i]=number[j];
				number[j]=t;
			}
		}
	}
	if (average-number[0]==number[n-1]-average)
		cout<<number[0]<<","<<number[n-1]<<endl;
	else if (average-number[0]>number[n-1]-average)
		cout<<number[0]<<endl;
	else if (average-number[0]<number[n-1]-average)
		cout<<number[n-1]<<endl;
	return 0;
}