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
 * 1000010400_27.cpp
 *
 *  Created on: 2010-10-29
 *      Author: ??
 *      Function:????????
 */

int main()
{
	int n;
	cin>>n;//??????????
	int a[20000];
	int i;
	for(i=0;i<n;i++)
		cin>>a[i];//???????
	int j;
	int k;
	for(i=0;i<n;i++)
		{
		    j=i+1;
		    while(j<n)
			if(a[i]==a[j])//??a[i]??????????a[i]
			{
				n--;
				for(k=j;k<n;k++)
				a[k]=a[k+1];//?????
			}
			else j++;
		}
	for(i=0;i<n-1;i++)
		cout<<a[i]<<" ";//????
	cout<<a[n-1];
	return 0;
}
