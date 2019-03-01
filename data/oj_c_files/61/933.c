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
 * ??????.cpp
 *
 *  Created on: 2013-10-11
 *      Author: 111
 */

int main()
{
	int f[21],n,i,a[20];               //???????a[20]?????????f[20]
	cin>>n;
	f[1]=1;f[2]=1;
	for (i=3;i<=20;i++)
		f[i]=f[i-1]+f[i-2];            //?????????
	for (i=1;i<=n;i++)
	{
		cin>>a[i];                     //????n??
		a[i]=f[a[i]];                  //?a[i]???????
	}
	for (i=1;i<=n;i++)
		{
		cout<<a[i]<<endl;              //????
		}

}
