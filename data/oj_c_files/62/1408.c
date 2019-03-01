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

main()
{
	char *p;
	int k=0;
	p=(char*)malloc(300*sizeof(char));
	gets(p);
	for(;*p!='\0';p++)
	{
		if(*p==' '&&k!=0)
			continue;
		if(*p==' '&&k==0)
			k++;
		if(*p!=' ')
			k=0;
		putchar(*p);
	}
}

