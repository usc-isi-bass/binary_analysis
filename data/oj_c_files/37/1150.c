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
	int count[26]; //???26?????????????????
	char s[100000];
	int n;
	scanf("%d\n",&n);
	while( n > 0 )
	{
		int i;
		for( i = 0; i < 26; i++ )  //??????????????count??
			count[i] = 0;

		gets( s );
		i = 0;
		while( s[i] != '\0' )  //?????????????????
		{
			count[ s[i] - 'a' ] ++; //??????????????????????
			i++;
		}

		int flag = 0;
        
		i = 0;
		while( s[i] != '\0' )
		{
			if( count[ s[i] - 'a' ] == 1 )
			{
				printf( "%c\n", s[i] );
				flag = 1;                 //??????????????
				break;
			}

			i++;
		}

		if( flag == 0 )  //???????????????????
		{
			printf("no\n");
		}

		n--;
	}
	return 0;
}

			

