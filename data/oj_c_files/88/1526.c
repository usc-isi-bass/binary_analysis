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

/*-----------------------------------------*\
|? ? ?   ?????                 	    |
|? ?      ????	                    |
|? ? ? ??2010 ? 12 ? 09 ?		    |
|? ?      ?1000012758		            |
\*-----------------------------------------*/ 
int main()
{
	char text[50];//??????
	char *p;
	p = text;//??????
	gets(p);//??
	for (; *p != 0; p++)
		if (*p < '0' || *p > '9')
			*p = 0;//???????????
	*p = 1;//????
	p = text - 1;//????
	while (*(++p) != 1)
		if (*p != 0)//?????
			cout << *p;
		else if (*(p + 1) != 0)//???????????
			cout << endl;
		return 0;
}