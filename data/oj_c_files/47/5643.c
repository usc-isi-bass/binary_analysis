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
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int t;
	for(int i=0;i<=(int)(0.5*(n+1))-1;i++)
	{
		t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;

	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
		if(i!=n-1) cout<<" ";
	
	}
	cout<<endl;
	return 0;
}