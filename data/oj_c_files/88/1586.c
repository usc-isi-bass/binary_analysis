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
 *  Created on: 2010-12-13
 *      Author: ??
 *      ????????
 */
int main()
{
	char str[31], *p=NULL;
	int i ;
	cin.getline(str,31);//?????
	p=str;//???????????
	for(i=0;*p!='\0';p++)
	{
		if(*p>='0'&&*p<='9')  cout << *p;//???????
		else if(*(p-1)>='\0'&&*(p-1)<='9') cout << endl;//???????????
	}
	return 0;
}