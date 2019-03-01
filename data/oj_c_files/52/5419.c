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
	int i,j,n,m,num[100],a,t;
	cin>>n>>m;
	for(i=0;i<n;i++)
		{cin>>a;
	num[i]=a;}
	for(i=n-m-1;i<n-1;i++)
	{
		for(j=i;j>=i+m+1-n;j--)
		{
			t=num[j];num[j]=num[j+1];num[j+1]=t;}}
	for(i=0;i<n-1;i++)
		cout<<num[i]<<' ';
	cout<<num[n-1];
	return 0;
}
