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
	int i = 0,j,k,n,de = 0;//de?????????
	char a[1000];
	char *p;
	p = a;
	cin.getline(a,1000);
	n = strlen(a);
	for (i = 0 ; i < n ; i ++)
	{
		if ( *(p + i) == ' ')//???
		{
			for ( j = i + 1;j < n; j ++)//????????????????????????
			{
				if ( *(p + j) == ' ' )
				{
					de ++;
					for ( k = j; k < n - 1; k ++)
						*(p + k) = *(p + k + 1);
					j --;//?????????1????j???
				}
				else break;
			}
		}
	}
	for ( i = 0; i < n - de ; i ++ )//????????
		cout << *(p + i) ;
	return 0;
}