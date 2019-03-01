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
 *  1000012850_32.1.cpp
 *  ????????  ????????
 *  Created on: 2010-11-20
 *      Author: William
 */
int main()      //???
{
	int apple[1000], n, k, i, j;
	cin>>n>>k;
	for(i=1;;i++)
	{
		apple[n]=i*(n-1);
		for(j=n;j>=2;j--)
		{
			apple[j-1]=apple[j]*n/(n-1)+k;
			if(apple[j-1]%(n-1)!=0)
				break;
		}
		if(j==1)
			{
			cout<<(apple[1]*n/(n-1)+k);
			break;
			}
	}
	return 0;
}