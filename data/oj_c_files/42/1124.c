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
	int i,a[100001],n,k,x;
    cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	for(i=0;i<n;i++)
	{
	if(a[i]==k)
	a[i]=172486;
	}
    for(i=0;i<n;i++)
	{
	if(a[i]!=172486)
	{cout<<a[i];
	x=i;break;}
	}
	for(i=x+1;i<n;i++)
{if(a[i]!=172486)
cout<<" "<<a[i];}
		cin.get();
		return 0;
}