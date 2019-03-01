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
	char a[1000];
	cin>>a;
	int length;
	int i;
	length=strlen(a);
	char b[1000];
	int c[1000];
	int x;
	x=0;
	for(i=0;i<length;i++)
	{
		if(a[i]>='a' && a[i]<='z')
			a[i]=a[i]-32;
	}
	b[0]=a[0];
	c[0]=1;
	for(i=1;i<length;i++)
	{
		if(a[i]==a[i-1])
		{
			b[x]=a[i];
			c[x]++;
		}
		else
		{
			x++;
			b[x]=a[i];
			c[x]=1;
		}
	}
	for(i=0;i<=x;i++)
		cout<<'('<<b[i]<<','<<c[i]<<')';
	cout<<endl;
	return 0;
}
