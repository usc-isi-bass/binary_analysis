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
 * lanjiedaodan.cpp
 *
 *  Created on: 2010-9-29
 *      Author: lz
 */

int main()
{
	int k;
	cin>>k;
	int a[k];
	int num[k];
	int i;
	int j;
	for(i=0;i<k;i++)
		{
		cin>>a[i];
		num[i]=1;
		}
for(i=0;i<k;i++)
	for(j=0;j<i;j++)
		if(a[j]>=a[i])
			if(num[i]<num[j]+1)
				num[i]=num[j]+1;
int max=1;
for(i=0;i<k;i++)
	if(num[i]>max)
		max=num[i];
cout<<max;
return 0;

}
