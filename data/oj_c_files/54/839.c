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
 * houzi.cpp
 *
 *  Created on: 2011-11-16
 *      Author: ??
 */
int main()
{
	int n,i,k;
	cin>>n>>k;
	int apple[n+1];
	apple[1]=n+k;
	while(true)
	{
	for(i=2;i<=n;i++)
	{
		apple[i]=(apple[i-1]-k)/n*(n-1);
	    if(apple[i]%n!=k)  break;
	}
	if(i==n+1) break;
	else apple[1]=apple[1]+n;
	}
	for(i=1;i<=n;i++)
	{
		cout<<apple[i]<<endl;
	   break;
}
	return 0;
}