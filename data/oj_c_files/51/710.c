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
	int n;
	char ch[510];                                        //??ch????????n?????
	cin >> n;
	cin >> ch;                                           //??
	int len = strlen(ch);
	char *p, *q;
	int cnt, num = 0;
	int big = 0, howmany = 0;                //cnt???????????num???????big?????????howmany????????
	char *choice[510];                        //????choice??????????

	for ( int i = 0; i <= len - n; i++ )       //????????????
	{
		num = 0;
		for ( int j = i; j <= len - n; j++ )
		{
			cnt = 0;
			p = &ch[i];     q = &ch[j];        //?????p,q???????
			for ( int k = 0; k < n; k++ )
			{
				if ( *p++ == *q++ )            //????
					cnt++;
			}
			if ( cnt == n )                    //????n?????????num?1
				num++;
		}
		if ( num > big )                       //?num???????????????
		{
			big = num;
			howmany = 0;
			choice[howmany] = p - n;
		}
		else if ( num == big )                 //?num?????????howmany?1??????
		{
			howmany++;
			choice[howmany] = p - n;
		}
	}
             
	if ( big == 1 )                        //???????No
		cout << "NO";
	else
	{
		cout << big << endl; 
		for ( int l = 0; l <= howmany; l++ )   
		{
	    	for ( int y = 0; y < n; y++ )
	    		cout << *choice[l]++;
	    	cout << endl;
		} 
	}
	return 0;
}
