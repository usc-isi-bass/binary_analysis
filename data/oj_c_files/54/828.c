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
 * pr9.cpp
 *
 *  Created on: 2011-11-15
 *      Author: Gan Hua
 */
int main()
{
	int n,k,m;//????n?????k,????m
	cin>>n>>k;
	int i,j,flag=1;
	for(i=1;flag==1;i++)
		{
		m=n*i+k;//??????????????
	for(j=1;j<=n-1;j++)
		if(m%(n-1)==0)
			m=m*n/(n-1)+k;//????????????
		else break;
	if(j==n)
		{cout<<m;flag=0;}
		}
}

