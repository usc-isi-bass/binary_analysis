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
 * jishudanzeng.cpp
 *  Created on: 2012-11-8
 *      Author:??? 1200012899
 */
int main ()
{
	int N;
	cin>>N;//??????????
	int i,a[1000],j,temp,k=0;
	for(i=0;i<N;i++)
	{
		cin>>a[i];//????????
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-i;j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];a[j]=a[j+1];a[j+1]=temp;//???????????a??????????
			}
	}
	for(i=0;i<N;i++)
	{
		if(a[i]%2==1)
		{
			k=k+1;
			if(k!=1)
				cout<<",";//??????
			cout<<a[i];//???????
		}
    }
	return 0;
}