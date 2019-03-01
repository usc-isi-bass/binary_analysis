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
	char a[1100];
	cin>>a;
	char c[1100];
	int n,p=0;
	int b[1100];
	n=strlen(a);
	for(int i=0;i<n;i++)
		b[i]=1;
	for(int i=0;i<n;i++)
	{
		if(a[i]-'a'>=0)
			a[i]=a[i]-32;
	}
	for(int i=1;i<n;i++)
	{
		if(a[i]==a[i-1])
		{b[p]++;c[p]=a[i];}
		else
		{p++;c[p]=a[i];}
	}
	c[0]=a[0];
	for(int j=0;j<=p;j++)
		cout<<"("<<c[j]<<","<<b[j]<<")";
	return 0;
}