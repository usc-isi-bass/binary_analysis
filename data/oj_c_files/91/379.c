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

main ()
{
	char a[101],b[101];
	gets(a);
	for (int i=0;i<strlen(a);i++)
	{b[i]=a[i]+a[i+1];
	b[strlen(a)-1]=a[0]+a[strlen(a)-1];
	printf ("%c",b[i]);}
} 