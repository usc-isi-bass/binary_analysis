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
 * 1000012739_finaltest3_7.cpp
 *
 *  Created on: 2011-1-8
 *      Author: ???
 *		Title: ????
 */


int indexx=-1;
char boy='\0',girl='\0';

int slv(void)
{
	char c;
	int ind,m;
	while (true)
	{
		indexx++;
		cin>>c;
		if (indexx==0)
			boy=c;
		else
			if (girl=='\0' && c!=boy)
				girl=c;
		if (c==girl)
		{
			return indexx;
		}
		else
		{
			ind=indexx;
			m=slv();
			cout<<ind<<' '<<m<<endl;
		}
	}
}

int main()
{
	slv();
	return 0;
}
