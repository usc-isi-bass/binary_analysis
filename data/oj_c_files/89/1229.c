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

	int a[1000005],b[1000005],va,vb;
int main()
{
	int n,time=0,much,flag=0;
	cin>>n;
	cin>>va>>vb;
	while((va!=0)||(vb!=0))
	{
		a[time]=va;
		b[time]=vb;
		time++;
		cin>>va>>vb;
	}
	a[time]=va;
	b[time]=vb;
	for(int i=0;i<n;i++)
	{
		much=0;
		for(int j=0;j<=time;j++)
		{
			if(b[j]==i)
			much++;
		}
		if(much>=n-1)
		{
			flag=1;
			for(int j=0;j<=time;j++)
			{
				if((a[j]==i)&&(b[j]!=i))
				{
						flag=0;
						break;
				}
			}
			if(flag==1)
			{
				cout<<i<<endl;
				break;
			}
		}
	}
	if(flag==0)
	cout<<"NOT FOUND"<<endl;

	return 0;
}
