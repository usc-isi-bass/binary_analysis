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
	char a[1000];
	int i,j,k,len,l;
	cin.getline(a,1000);
	len = strlen(a);
	for ( l = 2;l < len; l ++ )//??????2????
	{
		for ( i = 0 ; i < len + 1 - l; i ++)
		{
			for ( j = i,k = 0;j <= i + l/2; j ++,k ++ )
			{
				if (a[j] != a[i+l-1-k])  break;
			}
			if ( j > i + l/2)
			{
				for ( j = i; j < i + l;j ++ )  cout << a[j];
				cout << endl;
			}
		}
	}
	return 0;
}
