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
 * T.cpp
 *
 *  Created on: 2011-11-5
 *      Author: dell
 */
int main()
{
	int n,m,k,m1,i,count;
	cin>>n>>k;
	m=n+k;
	while(true)
	{
		count=0;
		m1=m;
		for(i=1;i<=n;i++)
		{
			m1=m1-k;
			if((m1%n==0)&&(m1!=0))
			{
				count++;m1=m1*(n-1)/n;continue;
			}
			break;
		}
		if(count==n){
			cout<<m<<endl;
			break;
		}
		m+=n;
	}
	return 0;
}
