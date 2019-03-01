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
	char a[256],b[256],c[256],*d,*e,*f,*g;
	int i;
	gets(a);
	g=a;
	gets(b);
	gets(c);
	d=strstr(a,b);
	if(!d)
	{
		printf("%s",g);
		exit(0);
	}
	f=a;
	i=strlen(a)-strlen(d);
	f[i]='\0';
	e=a+(strlen(a)-(strlen(d)-strlen(b)));
	printf("%s%s%s\n",f,c,e);
	return 0;
}

