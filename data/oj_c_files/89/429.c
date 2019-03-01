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

/*
 * shehuimingliu.cpp
 *
 *  Created on: 2011-1-8
 *      Author: Owner
 */
int a[1000000];
int b[1000000];

int main()
{
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	int n;
	int i;
	int j;
	int x,y;
	cin>>n;
	for(i=1;i<=n*(n-1);i++)
	{

		cin>>x>>y;
		if((x==0)&&(y==0))  break;
		a[y]++;
		b[x]++;
	}
	for(j=0;j<n;j++)
	{
		if((a[j]==n-1)&&(b[j]==0))
			{cout<<j<<endl;
			break;
			}

		else
		{
			if(j==n-1)
				cout<<"NOT FOUND"<<endl;

		}
	}
}