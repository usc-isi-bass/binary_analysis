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
 * 05.cpp
 *??????
 *  Created on: 2012-10-18
 *      Author: ???
 */
int main()
{
	int l,q,z,s;//????
	s=10;z=20;q=30;l=40;//??????
	if(z+q==s+l&&z+l>s+q&&z+s<q)
		cout<<"l 40\n"<<"q 30\n"<<"z 20\n"<<"s 10\n";//????
	s=10;z=20;q=40;l=50;//??????
	if(z+q==s+l&&z+l>s+q&&z+s<q)
		cout<<"l 50\n"<<"q 40\n"<<"z 20\n"<<"s 10\n";//????
	return 0;
}
