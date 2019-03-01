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
 * ditui4.cpp
 *   ?????
 *  Created on: 2010-11-20
 *      Author: ???
 */

int main(){
	int n,k;
	int i,j,z,a,c;                      //z???????????z=n??a????????
	cin>>n>>k;
	for(i=n-1;;i=i+n-1)
		{a=i;
		z=1;
		for(j=1;j<=n-1;j++)
			{c=a*n/(n-1)+k;
			if(c%(n-1)==0)
					{z++;a=c;}
			else break;}
		if(z==n)  {a=a*n/(n-1)+k;break;}
		}
	cout<<a;
	return 0;
}