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
 * 1000012900.cpp
 *
 *  Created on: 2010-12-23
 *      Author: Princeyou
 */
int main()
{
	char a[500];
	cin >> a;
	int i,j,l,k,m,n,c;
	l=strlen(a);
	for(k=1;k<=l/2;k++)
	for(i=0;i<l;i++)
	{
		m=i;
		n=i+1;
		c=0;
		while(a[m]==a[n])
		{
			c++;
			if(c==k)
			{
				for(j=m;j<=n;j++)
				cout << a[j];
				cout << endl;
				break;
			}
				m--;
				n++;
		}
	}
		return 0;
}

