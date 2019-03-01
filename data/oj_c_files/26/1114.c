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
	char a[101];
	gets(a);
	for (int i=0;i<strlen(a)-1;i++)
	{if (a[i]!=' '||a[i+1]!=' ')
	    printf ("%c",a[i]);
	}
	printf ("%c",a[strlen(a)-1]); 
}