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
 * 1062.cpp
 *
 *  Created on: 2011-11-15
 *      Author: sony
 */

int route(int x,int y){                //??????,????????????,???????????????
	if(x==y) return x;
	if(x>y) return route(x/2,y);
	if(x<y) return route(x,y/2);
	else return route(x/2,y/2);
}


int main()
{
	int x,y;
	cin>>x>>y;
	cout<<route(x,y)<<endl;
	return 0;
}
