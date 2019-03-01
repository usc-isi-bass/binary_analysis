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

char multiply_2(char a[110])
{
	int len=strlen(a);
	int b[110]={0},c[110]={0};
	for(int i=0;i<len;i++)
	{
		b[i]=a[len-i-1]-'0';
	}
	for(int i=0;i<len;i++)
	{
		if(b[i]*2+c[i]>=10)
		{
			c[i+1]++;
			b[i]=b[i]*2+c[i]-10;
		}
		else
		{
			b[i]=b[i]*2+c[i];
		}
	}
	int p=0;
	if(c[len]>0)
	{
		p=1;
		b[len]+=c[len];
	}
	if(p==1)
	{
		len++;
	}
	for(int i=0;i<len;i++)
		a[i]=b[len-i-1]+'0';
	return a[110];
}
int main()
{
	int n=0;
	cin>>n;
	char a[110]={0};
	a[0]='1';
	for(int i=0;i<n;i++)
		multiply_2(a);
	cout<<a<<endl;
	return 0;
}