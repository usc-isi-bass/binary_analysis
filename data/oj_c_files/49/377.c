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

void ggg( int i,  char b[500])
{
	int len, j, k, flag;
	len = strlen(b);
	for( j = 0;j <= (len - i);j++ )
	{
		for( k = 0;k < i/2;k++ )
		{
			if( b[j + k] == b[j + i - k - 1] )
			{
				flag = 1;
			}
			else	
			{
				flag = 0;
				break;
			}
		}
		if( flag == 1 )	
		{
			for( k = j;k < j+i; k++ )
			{
				cout << b[k];
			}
			cout << '\n';
		}
	}
}
int main ()
{
	int i, len;
	char a[500];
	cin.getline(a, 500);
	len=strlen(a);
	for( i = 2;i <= len;i = i + 2)
	{
		ggg(i,a);
	}
return 0;
}


