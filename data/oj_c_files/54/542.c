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
 * ?????.cpp
 *
 *  Created on: 2010-11-24
 *      Author: acer
 */

int main()
{
	int n,k,t=1,i;
	cin>>n>>k;
	int apple[n];
	while(1)					//????????????????????
	{
		apple[0]=t*n+k;			//0????
		for(i=1;i<n;i++)
		{
			if(apple[i-1]%(n-1)!=0)
			{					//???????????????break?
				t++;
				break;
			}
			apple[i]=apple[i-1]*n/(n-1)+k;	//?????
		}
		if(i==n)				//??????????????
		{
			cout<<apple[n-1];
			break;				//????
		}
	}
	return 0;
}
