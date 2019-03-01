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
 * bla.cpp
 *
 *  Created on: 2012-11-4
 *      Author: Administrator
 */

int main()
{
	int m;
	while(cin>>m)
	{
		if(m==-1) break;
		int a[15],i=0,j,k,count=0;
		a[0]=m;
		while(cin>>m)
		{
			if(m==0) break;
			i++;
			a[i]=m;
		}
		k=i+1;
		for(i=0;i<k;i++)
			for(j=0;j<k;j++)
				if(a[i]==2*a[j])
					count++;
		cout<<count<<endl;
	}
	return 0;
}