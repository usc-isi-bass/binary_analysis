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
 * bifanliang.cpp
 *??????
 *  Created on: 2013-9-28
 *      Author: ???
 */
int main()
{
	for(int a=0;a<=2;a++)
		for(int b=0;b<=2;b++)
		{
			int c=3-a-b;
			if((c!=a)&&(c!=b)&&(a!=b)&&((b>a)+(c==a)==2-a)&&((a>b)+(a>c)==2-b)&&((c>b)+(b>a)==2-c))
				for(int i=0;i<=2;i++)
				{
					if(a==i)
						cout<<'A';
					if(b==i)
						cout<<'B';
					if(c==i)
						cout<<'C';
				}
		}
	return 0;
}
