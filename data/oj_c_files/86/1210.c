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
	int a[70],b[70],c[70],i,j,k,l,m,n,times,sum;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(l=0;l<70;l++)
			a[l]=0,b[l]=0;//??a?????????????????b?????????????//
		cin>>times;//times??????//
		for(j=0;j<times;j++)
			cin>>b[j];
		for(j=1,m=1,k=0;j<=60;j++,m++)//j???????m????????//
		{
			a[j]=1;//??????????????????1.??????0//
			if(m==b[k])
				k++,j=j+3;//????????+3???k+1??????????????b???//
		}
		for(j=1,sum=0;j<=60;j++)
			if(a[j]==1)
				sum++;//?????�?�???????????????//
		c[i]=sum;
	}
	for(i=0;i<n;i++)
		cout<<c[i]<<endl;
	return 0;}