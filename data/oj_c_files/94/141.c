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

/********************************************
 * ??????								*
 *											*
 *  Created on: 2010-12-24					*
 *      Author: ??							*
 ********************************************/
int main()
{
	int n;
	cin>>n;
	const int N=n;
	int a[N],b[N];			//???????????????????????????
	int i,j,k=0,h;
	for(i=0;i<n;i++)		//??????
	{
		cin>>a[i];
		if(a[i]%2==1)		//????
		{
			b[k]=a[i];
			k++;
		}
	}
	for(i=1;i<k;i++)		//?????????
	{
		for(j=0;j<k-i;j++)
		{
			if(b[j]>=b[j+1])
			{
				h=b[j];
				b[j]=b[j+1];
				b[j+1]=h;
			}
		}
	}
	cout<<b[0];				//???????????
	for(i=1;i<k;i++)
	{
		cout<<","<<b[i];
	}
	return 0;
}
