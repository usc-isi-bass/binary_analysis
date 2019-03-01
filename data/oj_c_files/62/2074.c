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
	char c,d;
	while((c=getchar())!='\n')
	{
		if(c!=' '||d!=' ') putchar(c);
	    d=c;
	}
	printf("\n");
	return 0;
}