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

int a[10001],len=1;
void cal()
{
	int i;	
	a[len]*=2;
	i=len-1;
	if (a[len]>=10)
	{
		a[len]-=10;
		a[++len]=1;
	}
	for (;i>=1;i--)
	{
		a[i]*=2;
		if (a[i]>=10)
		{
			a[i]-=10;
			a[i+1]+=1;
		}
	}
};

int main()
{
	int n,j;
	cin>>n;
	for (j=1;j<=10000;j++)
		a[j]=-1;
	a[1]=1;
	for (j=1;j<=n;j++)
		cal();
	for (j=len;j>=1;j--)
		cout<<a[j];
	cout<<endl;
	return 0;
}