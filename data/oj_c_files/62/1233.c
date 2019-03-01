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
 * homework3.cpp
 *
 *  Created on: 2012-12-4
 *      Author: Lixurong
 */


int main()
{
	char a[1000];
	cin.getline(a,1000);
	int p=0, len=strlen(a);
	for( int i=0; i<len; i++ )
	{
		if( *(a+i) != ' ' )
		{
            p=0;
		}
		else if(p==1)
		{
			for( int j=i; j<len-1; j++ )
			{
				*(a+j)=*(a+j+1);
			}
			len--;
			i--;
		}
		else
		{
			p=1;
		}
	}
	*(a+len)='\0';
	cout << a;
}