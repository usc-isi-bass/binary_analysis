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
 * 1000012739_32_2.cpp
 *
 *  Created on: 2010-11-22
 *      Author: ???
 *		Title: 1062 ???
 */



int main()
{
	int x,y,m;		//?????m??????x
	cin>>x>>y;		//????x?y
	while (y!=1)
	{
		m=x;		//m????x
		while (m!=1)
		{
			if (m==y)		//?????
			{
				cout<<m;	//?????
				return 0;	//????
			}
			m/=2;			//x???????
		}
		y/=2;		//y???????
	}
	cout<<1;		//?y=1????1
	return 0;		//????
}