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
 * longwords.cpp
 *
 *  Created on: 2013-11-4
 *      Author: dyx
 */
int main()
{
	char words[100];
	cin.getline(words,100);

	int i,j=0;
	for(i=0;words[i]!='\0';i++)
	{
		if(words[i]==' ')
		{
			if(j==1)
				continue;
			if(j==0)
				j++;
		}
		if(words[i]!=' ')
			j=0;
		cout << words[i];
	}


}
