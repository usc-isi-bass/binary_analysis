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
 * tree.cpp
 *
 *  Created on: 2011-11-9
 *      Author: wangshiheng
 */
int main()
{
	int x,y,t;
	cin>>x>>y;
	while (x!=y)  //?????????????2????????????????????????
	{
		if (x<y)	{t=x;x=y;y=t;}
		x/=2;
	}
	cout<<x;
	return 0;
}
