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

//????????????
//???
//1000062701
int main()
{
	int i, j, k, t;
	cin >> t;
	char str[10000];                     //?????
	for( i = 0; i < t; i ++ )
	{
		int count[10000] = {0};          //????
		cin >> str;
		cin.get();
		for( j = 0; str[j]!= '\0'; j++ )
			count[str[j]]++;
		for( k = 0; str[k]!= '\0'; k++ )
		{
			if( count[str[k]] == 1 )
			{
				cout << str[k] << endl;    //????????
				break;
			}
		    if( str[k + 1] == '\0' )
				cout << "no" << endl;      //????????no
		}
	}
	return 0;
}