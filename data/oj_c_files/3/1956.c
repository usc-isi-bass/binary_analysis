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
 * wanyi.cpp
 *
 *  Created on: 2012-10-23
 *      Author: 7
 */

int main()
{
	int n,k,flag;
	int num[1000];
	int i=0,j;
	cin>>n>>k;
	while(i<n)
	{
		i++;
		cin>>num[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(num[i]+num[j]==k)
			{
				cout<<"yes"<<endl;
				flag=0;
				i=n;
				j=n;
				break;
			}
		}
	}
	if(flag)
		cout<<"no"<<endl;
}
