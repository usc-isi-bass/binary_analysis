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
 * qz05.cpp
 *
 *  Created on: 2010-11-16
 *      Author: ??
 */
int main()
{
	int n,sum=0,i;
	cin>>n;                                                                         //????
	for(i=1;i<=n;i++)
	{
		if((i%7==0)||((i%10!=0)&&((i%10)%7==0))||(((i-i%10)>0)&&((i-i%10)%7==0)))
		{
			continue;																//???7????
		}
		else
		{
			sum=sum+i*i;															//???7????????
		}
	}
	cout<<sum;																		//?????
	return 0;
}
