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

//
//	?????	??2?N??
//	?????	??2?N????
//	?????	?  ? ? ? ?? 1000012733 ?
//	?????	2010 ? 12 ? 18 ?
//
int main()
{
	int n, i, j, k, len, temp, l;			/*??????????????n??2?????????2??????i?j?k?l????????len??
											?????result????temp??????????????2?????????????????*/
	char result[1000];						//???????result????2???????
	int t[1000];							//??????t?????????2?????????????????
	memset ( result, 0, 1000 );				
	memset ( t, 0, sizeof ( t ));			//?????result?t??????
	cin >> n;								//?????????2????
	result[0] = '2';						//????result?????2
	for ( i = 1; i < n; i++ )				//??2?n?????? n - 1 ? ?????? n = 0 ? n = 1 ??????? ?
	{
		len = strlen ( result );			//???????result???
		k = 0;								//k???0
		memset ( t, 0, sizeof ( t ));		//?t????????
		for ( j = len - 1; j >=0; j-- )		//?????result??????????????
		{
			temp = result[j] - '0';			//??temp????????result?????????
			t[k] += temp * 2;				//??????????temp??2
			if ( t[k] >= 10 )				
			{
				t[k + 1] += 1;
				t[k] = t[k] - 10;
			}								//????????????????10???????
			k++;							//?????k??????1
		}
		if ( t[k] == 0 )					//???????????????????k??1?????????????
			k = k - 1;
		memset ( result, 0, 1000 );			//??result???????result??????
		for ( l = 0; l <= k; l++ )
		{
			result[k - l] = '0' + t[l];		//??????????????result???
		}
	}
	if ( n == 1 )
		cout << 2 << endl;					//??????2?1???????2
	else if ( n == 0)					
		cout << 1 << endl;					//??????2?0???????1
	else 
		cout << result << endl;				//???????2??????1????????result
	return 0;
}