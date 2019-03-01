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
 * 04.cpp
 *
 *  Created on: 2014-1-4
 *      Author: Administrator
 */
int main()
{
	int i,k=0,s;
	char a[100];
	gets(a);
	s=strlen(a);
	for(i=0;i<s;i++)
	{
		if(a[i]-'0'>=0&&'9'-a[i]>=0)
		{
			cout<<a[i];
			k=1;
		}
		else
			if(k==1)
			{
				cout<<endl;
				k=0;
			}
	}
	return 0;
}
