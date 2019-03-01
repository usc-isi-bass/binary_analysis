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
	char mystring[101];
	gets(mystring);
	char * p=mystring;
	for (;*p!='\0';p++)
	{
		if (p==mystring) cout<<*p;
		else if (*p!=' ') cout<<*p;
		else if (*(p-1)!=' ') cout<<*p;
	}
	return 0;
}