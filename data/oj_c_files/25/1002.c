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
	int n=0,i=0,x=0,y=0,a[100]={1},j=0,jin=0,s=0;//????,???????1,??????
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(x=0;x<100;x++)
		{
			if(j==1)//????????????
				jin=1;
			else
				jin=0;
			if(a[x]<5)//???,????
			{
				a[x]=a[x]*2;
				j=0;
			}
			else//??,????,j=1
			{
				a[x]=a[x]*2-10;
				j=1;
			}
			if(jin==1)
				a[x]=a[x]+1;
		}
	}
	for(i=99;i>=0;i--)//???????????????,?????
	{
		if(a[i]!=0)
		{
			s=i;
			break;
		}
	}
	for(;s>=0;s--)//????
		cout<<a[s];
	return 0;
}