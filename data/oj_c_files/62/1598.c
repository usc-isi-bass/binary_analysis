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


int main()
{
	char a[1000];
	gets(a);
	for(char *p=a;*p!='\0';p++)
	{
		if(*p==' '&&*(p+1)==' ')
		{

		}
		else
			cout<<*p;
	}
	return 0;
}