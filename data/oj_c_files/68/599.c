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


int sushu( int x )
{
	int j;
	if( x == 2 )
		return 1;
	for(j = 2; j <= sqrt( x ); j ++)
	    if(x % j == 0)
			return 0 ;
	return 1;

}
void main()
{
    int i, n, m;
	scanf("%d", &n );
	for(m = 6; m <= n; m += 2)
	{
        for(i = 2; i <= m / 2; i ++)
		    if((sushu( i ) == 1) && (sushu( m - i ) == 1))
			{
			    printf("%d=%d+%d\n", m, i, m - i);
			    break;
			}
	}


}