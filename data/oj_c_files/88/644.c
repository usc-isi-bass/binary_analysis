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
 * ????pick-out-numbers.cpp
 * ??????
 * ????:2012-12-19
 * ???????
 */
int main(){                        //???
	char str[31],*p=str;       //?????str,??p
	cin.getline(str,31);       //?????str
	if(isdigit(*p))cout<<*p++; //??????????????*(p-1)???
	while(*p!=0)               //????????
	{
		if(isdigit(*p))cout<<*p;
		else if(isdigit(*p)!=isdigit(*(p-1)))cout<<'\r';
		p++;
	}
	return 0;                  //?????
}