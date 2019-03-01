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


int main(int argc, char* argv[])
{
	char zfc[101],*p;
	char str[101],*pn;
	int len;

	gets(zfc);
	len=strlen(zfc);
	for(pn=str,p=zfc;pn<str+len-1;pn++,p++)
		*pn=*p+*(p+1);
	*pn=*p+*zfc;

	for(pn=str;pn<str+len;pn++)
		printf("%c",*pn);

	return 0;
}
