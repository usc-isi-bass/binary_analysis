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
 * gd.cpp
 *
 *  Created on: 2010-12-31
 *      Author: 10058
 */

int main()
{
	char c[50];
	cin.getline(c,50);
	int i=0;
	while(c[i]!='\0')
	{
		if(c[i]>='0'&&c[i]<='9')
		{
			cout<<c[i];
		}
		else
		{

			if(i!=0&&c[i-1]>='0'&&c[i-1]<='9')
			{
				cout<<endl;
			}
		}
		i++;
	}
	return 0;
}
