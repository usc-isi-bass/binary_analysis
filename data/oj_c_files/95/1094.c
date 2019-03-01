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
	char a[80],b[80];
	int i,n;
	gets(a);
	gets(b);
	n=strlen(a);
	for (i=0;i<n;i++)
	{
		if (a[i]>64&&a[i]<91) a[i]+=32;
		if (b[i]>64&&b[i]<91) b[i]+=32;
	}
	switch (strcmp(a,b))
	{
	case 1:putchar('>');break;
	case 0:putchar('=');break;
	case -1:putchar('<');
	}

}
