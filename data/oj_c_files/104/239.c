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
 *  ????????????
 *  Created on: 2010-11-20
 *      Author: William
 */
int main()      //???
{
	int a[12], b[12], i, j, k;
	cin>>a[0]>>b[0];
	if(a[0]!=1)
	{for(i=1;;i++)
	{
		a[i]=((a[i-1]-(a[i-1]%2))/2);
		if(a[i]==1)
			break;
	}}
	if(b[0]!=1)
	{for(i=1;;i++)
	{
		b[i]=((b[i-1]-(b[i-1]%2))/2);
		if(b[i]==1)
			break;
	}}
	for(i=0;i<12;i++)
		{
		   for(j=0;j<12;j++)
		     {
			   k=0;
			   if(a[i]==b[j])
			   {
				   k=1;
			       break;
			   }
		      }
		   if(k==1)
			   break;
		}
	cout<<a[i];
	return 0;
}