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
 * 304.cpp
 *  Theme: ???? 
 *  Created on: 2012-10-24
 *  Author: ??? 
 */

int max (int a,int b)    //??????:?????????? 
{
	return a > b?a:b;
}

int main(){
    int n,a,b,k=0,sum=0;   //???? 
	cin >>n;               //??n 
	for (int i = 1;i <= n;i ++)
	{
		cin >>a >>b;
		if ((a >= 90 &&a <= 140) && (b >= 60 &&b <= 90))
			{sum ++;
		k = max(k,sum);}    //??max?? 
		else sum = 0;       //???????sum?? 

	}
	cout <<k <<endl;        //??k 
	return 0;
}
