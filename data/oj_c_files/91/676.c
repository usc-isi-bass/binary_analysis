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
	char a[1000], b;
	cin.getline(a,1000);
    b=*a;
    for( int i=0; i<strlen(a)-1; i++ )
    {
    	int c=*(a+i+1);
    	*(a+i)+=c;
    }
    int c=b, len=strlen(a)-1;
    *(a+len) += c;
    cout << a;
	return 0;
}
