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
	int n=0,i=0,j=0;
	cin>>n;
	int a[100000]={0},b[100000]={0},c[100000]={0};
	do
	{
		cin>>i>>j;
		if(i==0&&j==0)
		break;
		else
		{
			a[i]=1;
			b[j]++;
		}
	}while(i!=0||j!=0);
	int *p=NULL,*q=NULL,tj=0,t=0,f=0;			
	p=&a[0];
	q=&b[0];
	for(t=0;t<n;t++)
	{
		if(*p==0&&*q==(n-1))
		{
			c[f]=t;
			tj++;
		}
		p++;
		q++;
	}
	if(tj==0)
	{
		cout<<"NOT FOUND"<<endl;
	}
	else
	{
		for(f=0;f<tj;f++)
		{
			if(f==tj-1)
			{
				cout<<c[f]<<endl;
			}
			else
			{
				cout<<c[f]<<" ";
			}
		}
	}
	return 0;
}
