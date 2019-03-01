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

int b[MAX_N + 10];
int aMaxLen[MAX_N + 10];
int main()
{	
	int N,i,j;
	scanf("%d",&N);
	for( i = N;i >= 1;i -- )
		scanf("%d", & b[i]);
	aMaxLen[1] = 1;
	for( i = 2; i <= N; i ++ )
	{ 
		int nTmp = 0;  
		for( j = 1; j < i; j ++ ) 
		{ 
			if( b[i] >= b[j] ) 
			{ 
				if( nTmp < aMaxLen[j] )
					nTmp = aMaxLen[j];
			}
		}
		aMaxLen[i]  = nTmp + 1;
	}
	int nMax = -1;
	for( i = 1;i <= N;i ++ )
		if( nMax < aMaxLen[i])
			nMax = aMaxLen[i];
	printf("%d\n", nMax);
	return 0;
}