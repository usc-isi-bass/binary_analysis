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
	char s1[300] , s2[300] , s3[300];
	scanf ( "%s%s%s" , s1 , s2 , s3 );
	char *p = strstr ( s1 , s2 );
	if ( p )
	{
		char temp = *(p + strlen(s2));
		strcpy ( p , s3 );
		*(p+strlen(s2)) = temp;
	}
	printf ( "%s\n" , s1 );
	return 0;
}

