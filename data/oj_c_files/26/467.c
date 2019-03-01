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
 * guolvkongge.cpp
 *
 *  Created on: 2010-11-20
 *      Author: lz
 */

int main()
{
	char c[105];
	cin.getline(c,105);
	int i=0;
	while(c[i]!='\0')
	{
		while(c[i]!=' '&&c[i]!='\0')
		{
			cout<<c[i];
			i++;
		}
		if(c[i]=='\0')
			break;
		cout<<c[i];
		i++;
		while(c[i]==' ')
			i++;
	}

    return 0;
}
