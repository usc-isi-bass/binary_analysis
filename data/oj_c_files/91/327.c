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
 * 15.cpp
 *
 *  Created on: 2013-12-8
 *      Author: Administrator
 */

int main()
{
	int s;
	char *p=NULL,*q=NULL;
	char a[200],b[200];
	cin.getline(a,200);//?????
	s=strlen(a);
	for(p=a,q=b;p<a+s;p++,q++)
	{
		if(p==a+s-1)
		  *q=*p+*a;
		else
		  *q=*p+*(p+1);//????
      cout<<*q;
	}
return 0;
}
