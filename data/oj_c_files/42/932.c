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
 * 2222.cpp
 *
 *  Created on: 2011-10-21
 *      Author: 11281
 */
int main()
{
	int n,b,c,i,j,q,k=0,s;
	cin>>n;
	int a[n];
	for(j=0;j<n;j++)
	{cin>>b;
	a[j]=b;
	}
	cin>>c;
	for(i=0;i<n;i++)
	{if(a[i]==c)
		{k=k+1;
	for(q=i+1;q<=n;q++)
	{a[q-1]=a[q];
	}
	i=i-1;}
	else
		continue;}
	for(s=0;s<n-k-1;s++)
	{cout<<a[s]<<" ";
}
	cout<<a[n-k-1]<<endl;
return 0;
}
