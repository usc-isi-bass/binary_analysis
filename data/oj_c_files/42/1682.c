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

int a[100000];
int n;
void del_a(int x)
{
	for(int i=x;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	a[n-1]=0;
	n=n-1;

}
int main()
{
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];

}
int t ;
cin>>t;
for(int i=0;i<n;i++)
{
if(a[i]==t)
{
del_a(i);
i=i-1;
}
}
for(int i=0;i<n-1;i++)
{
cout<<a[i]<<" ";
}
cout<<a[n-1];
return 0;
}