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
 * tiqushuzi.cpp
 *
 *  Created on: 2012-12-13
 *      Author: Lenovo
 */
int main()
{
	char array[33];
	char *point = NULL;
	int sum=0;
	cin.getline(array,33);
	point = array;
	for(;point<strlen(array)+array;point++)
	{
		if((*point<48||*point>57)&&sum==0)
		{
			cout<<endl;
			sum++;
		}
		else if((*point<48||*point>57)&&sum>0)
		{}
		else
		{
			cout<<*point;
			sum=0;
		}
	}
	return 0;
}
