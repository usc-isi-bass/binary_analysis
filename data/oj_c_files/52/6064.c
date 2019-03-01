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

//????????

int main()
{
	int n,m;
	cin>>n>>m;
	int a[300];
	int i,j;
	for(i=0;i<n;i++)
		cin>>a[i];
	int *p,*q,t;
	for(p=a+n-1;p>=a;p--)
	{
		*(p+m)=*p;
	}
	for(p=a;p<a+m;p++)
	{
		*p=*(p+n);
	}
	p=a;
	cout<<*p;
	for(p=a+1;p<a+n;p++)
		cout<<" "<<*p;
	cout<<endl;
	return 0;
}