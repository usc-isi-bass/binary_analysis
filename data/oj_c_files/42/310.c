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

/*????????
 * 1000012901_25.cpp
 *
 *  Created on: 2010-10-30
 *      Author: lenovo
 */
int main()
{
	int n,i,k,e=0,j;//???????e?????????
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];//????n??
	cin>>k;//????????
	for(j=0;j<n-e;j++)
	while(a[j]==k)//???????????????????
	{
		for(i=j;i<n-1-e;i++)
		a[i]=a[i+1];
		a[i]=0;//????????????
		e++;//????????e?1
	}
	for(i=0;i<n-e-1;i++)
		cout<<a[i]<<" ";
	cout<<a[n-e-1];//?????????????
	return 0;
}