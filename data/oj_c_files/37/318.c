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

//***********************************
//????1000012825_2              *
//??????                      *
//???11. 18                      *
//???????????            *
//***********************************
int main ()
{
	int t, i, j, k; 
	cin >> t;
	char str[100][10000];
	for ( i = 1; i <= t; i++ )
	{
		cin >> str[i];                 // ????????????
		for ( j = 0; str[i][j] != '\0'; j++ )
		{
			for ( k = 0; str[i][k] != '\0' ; k++) //????? ????
			{
				if ( j == k ) continue ;  // ?? j=k?????
				if ( str[i][k] == str[i][j] ) break; //???????????
			}
			if ( str[i][k] == '\0') // ???????????????????????????????
			{
				cout << str[i][j] << endl ; break;
			}
		}
		if ( str[i][j] == '\0' ) // ????????????�no�
			cout << "no" << endl;
	}
	return 0;
}
