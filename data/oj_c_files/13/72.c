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
	int a[20001]={0};//????a[20001],??a[n]????0
	int n=0;//?????n
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];//?n????
	}
    int b[20001]={0};//????b[20001],??b[n]????0
	int c[20001]={0};//????c[20001],??c[n]????0
	int l=1;//??l
	for(int j=1;j<=n;j++)
	{
		for(int k=0;k<j;k++)
		{
			if(a[j]==a[k])
			{
				b[j]=1;
				//????????,b[j]??
			}
		}
	}
	for(int p=1;p<=n;p++)
	{
	    if(b[p]==0)
		{
			c[l]=a[p];
			l=l+1;//?????????????????c[l]
		
		}
	}
	for(int m=1;c[m]>0;m++)
	{
		if(c[m+1]>0)//?c[m]??????
			cout<<c[m]<<" ";//??c[m]???
		if(c[m+1]==0)//?c[m]?????
			cout<<c[m]<<endl;//???c[m]
	}
	return 0;
}
			
