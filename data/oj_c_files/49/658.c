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

int main ()
{
	char ch[500];												//??????
	cin >> ch;
	int len = 0;												//?????????
	len = strlen(ch);
	for ( int templen = 2; templen <= len; templen ++ )			//??????
		for ( int i = 0; i <= len - templen; i ++ )				//?????????????
			for ( int j = i; j < i + templen; j ++ )			//????????????????
			{
				if ( ch[j] != ch[templen+i-1-(j-i)] ) break;
				if ( j == i + templen - 1 )
				{
					for ( int k = i; k < i + templen; k ++ )
						cout << ch[k];
					cout << endl;
				}
			}
	return 0;
}
