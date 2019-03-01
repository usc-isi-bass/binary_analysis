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
	int n;
	int num = 0;
	int m;
	scanf( "%d",&n );
	for( int i =1;i <= n ;i ++)
	{
		if( (i % 7) == 0 || (i % 10) == 7)
			continue;
		if( i / 10 != 0 )
		{
			m = i / 10;
			if( m == 7)
				continue;
		}
		num = num + i * i;
	}
	printf( "%d\n",num );
	return 0;
}