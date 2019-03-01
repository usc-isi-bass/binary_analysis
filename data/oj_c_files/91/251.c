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
 * FriendString.cpp
 *
 *  Created on: 2013-12-12
 *      Author: KEVIN
 */


int main()
{
	char s[101],s1[101];
	gets(s);
	for(char* p=s,*p1=s1,*pend=s+100;p<=pend;++p,++p1)
	{
		if(*(p+1)!=0)
			*p1=*p+*(p+1);
		else
		{
			*p1=*p+*s;
			*(p1+1)=0;
			break;
		}
	}
	cout<<s1;
	return 0;
}