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


int sum=0;

int min(int a[],int n)         //???????????
{
	int m=a[0];
	for(int i=0;i<n;i++)
		if(a[i]<m)
			m=a[i];
	return m;
}

int juzhen(int a[100][100],int n)
{
	int hangmin[100],liemin[100];  //?????????????????
	for(int i=0;i<n;i++)
	{
		hangmin[i]=min(a[i],n);  //?????????
	}
	for(int i=0;i<n;i++)           
	{
		for(int j=0;j<n;j++)
			a[i][j]=a[i][j]-hangmin[i];      //?????????????????????
	}
	int templie[100];         //??????????????
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			templie[j]=a[j][i];
		}
		liemin[i]=min(templie,n);            //?????????
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			a[j][i]=a[j][i]-liemin[i];       //???????????????????????
	}
	sum=sum+a[1][1];                         //??sum
	for(int i=1;i<n;i++)                    //???????
		for(int j=0;j<n;j++)
		{
			a[i][j]=a[i+1][j];
		}
	for(int j=1;j<n;j++)
		for(int i=0;i<n;i++)
		{
			a[i][j]=a[i][j+1];
		}
	n=n-1;                 //?n??1
	if(n==1)                  //??????????????1???
	{
		cout<<sum<<endl;      //????sum?????sum
		sum=0;
	}
	else juzhen(a,n);      //???????
	return 0;
}

int main()
{
	int n;
	cin>>n;
	int a[100][100];
	for(int k=1;k<=n;k++)        //?k???????
	{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	juzhen(a,n);
	}
	return 0;
}