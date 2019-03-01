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
	int a[100]={0};
	int *p,*q,r;
	cin>>n;
	for(p=a;p<a+n;p++)
	{
		cin>>*p;
	}
	for(p=a,q=a+n-1;p<q;p++,q--)
	{r=*p;*p=*q;*q=r;}
	for(p=a;p<a+n-1;p++)
	{cout<<*p<<" ";}
	cout<<*p;
	return 0;
}