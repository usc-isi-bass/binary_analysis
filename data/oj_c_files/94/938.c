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
	int n=0,m=0,k=0,j=0;//?????????
	cin>>n;
	int num[500]={0};//???
	for(k=0;k<n;k++)
	{
		int a;
		cin>>a;
		if(a%2!=0)//??????????
		{
			num[m]=a;
			m++;
		}
	}
	for(k=0;k<m-1;k++)//????
	{
		for(j=0;j<m-k-1;j++)
			if(num[j]>num[j+1])
			{
				int t;
				t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
			}
	}
	cout<<num[0];
	for(k=1;k<m;k++)//??
		cout<<','<<num[k];
	return 0;
}