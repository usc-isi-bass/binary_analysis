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
	int tem;
	int *p=NULL;
	int a[n];
	p=a;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(int i=0,j=n-1;i<j;i++,j--)
	{
		tem=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=tem;
	}
	for(int i=0;i<n;i++)
	{
		cout<<*(p+i);
		if(i!=n-1) cout<<' ';
	}
}
