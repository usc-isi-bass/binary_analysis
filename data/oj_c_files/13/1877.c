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
	int n,a[20000]={0},i,j,b[20000]={0},p=1,m=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(i=n;i>=2;i--)
	{
		for(j=i-1;j>=1;j--)
		{if(a[i]==a[j]) m+=1;}
		if(m==0) {b[p]=a[i]; p++;}
		m=0;
	}
	p=p-1;
	b[p+1]=a[1];
	for(i=p+1;i>=2;i--)
	{cout<<b[i]<<" ";}
	cout<<b[1]<<endl;
	return 0;
}