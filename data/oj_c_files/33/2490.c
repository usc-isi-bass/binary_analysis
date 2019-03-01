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
	int n,i,j;
	int LEN;
	scanf("%d",&n);
	getchar();
	for ( i = 0 ; i < n ; i ++)
	{
		char s[1000];
		gets(s);
		LEN = strlen(s);
		for ( j = 0 ; j < LEN ; j ++)
		{
			switch ( s[j] )
			{
			case 'A':
				printf("T");
				break;
			case 'T':
				printf("A");
				break;
			case 'C':
				printf("G");
				break;
			case 'G':
				printf("C");
				break;
			}
		}
		if( i < n-1)
			printf("\n");
	}
	return 0;
}