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
 * 14-food.cpp
 *
 *  Created on: 2012-11-9
 *      Author: joip
 */
int main ()
{
	int A,B,C; //??????????? ABC???????
	for (A=0;A<=2;A++)//????
		for (B=0;B<=2;B++)
			for (C=0;C<=2;C++)
				if( (B>A)+(C==A)==2-A && (A>B)+(A>C)==2-B && (C>B)+(B>A)==2-C )//?????????????????????ABC???
				{
					char  a[4];
					a[A]='A';  a[B]='B';  a[C]='C';
					for (int i=0;i<=2;i++)
						cout<<a[i];//???????? ??????????
				}
	return 0;
}
