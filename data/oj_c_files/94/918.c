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

int main()//???
{
	int n,a[1000],b[1000],s=0,d=0,f=0,i=0,j=0;//????
	cin>>n;
	for(i=0;i<n;i++)
	{ 
		cin>>a[i];
		if(a[i]%2==1)
		{b[j]=a[i],j++,d++;}//???????
	}
	for(i=0;i<d-1;i++)
	{
		for(j=i+1;j<d;j++)
		{
			if(b[i]>b[j])
			{f=b[i],b[i]=b[j],b[j]=f;}//?????
		}
	}
	for(j=0;j<d-1;j++)
	{cout<<b[j]<<",";}
	cout<<b[d-1];//????
	return 0;
}