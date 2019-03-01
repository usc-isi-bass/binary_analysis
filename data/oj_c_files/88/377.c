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
 * test4_1.cpp
 *?? - ????
 *  Created on: 2010-12-31
 *      Author: 10035
 */

int main()
{
	char c[50];  //????
	int n,i;
	cin.getline(c,50);
	n=strlen(c);
	i=0;
	while (i<n)
	{
		if ((c[i]<'0')||(c[i]>'9')) {i++; continue;}         //????,????
		while ((c[i]>='0')&&(c[i]<='9')&&(i<n)) {cout<<c[i]; i++;}  //???,??
		cout<<endl;
	}
	return 0;
}
