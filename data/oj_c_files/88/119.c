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
 * 001.cpp
 * name:????
 *  Created on: 2011-12-25
 *      Author: 11029
 */
int main(){
	char c;
	int flag=1;
	while ((c=getchar())!='\n')
	{
		if (c>='0'&&c<='9')
		{
			cout<<c;
			flag=0;
		}
		else
		{
			if (flag==0)
				cout<<endl;
			flag=1;
		}
	}
	return 0;
}
