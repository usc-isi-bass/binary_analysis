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
	int n;                          //n????
	char ch[1000][41];
	int len[1000];

	cin >> n;
	for ( int i = 0; i < n; i++ )   //??
	{
		cin >> ch[i];
		len[i] = strlen(ch[i]);
	}
	char *p;                         //????

	int num = 0, cnt = 0;           //???????cnt??????num
	while(1)
	{
		if ( cnt >= n )             //???????????
			break;
    	while( num + len[cnt] <= 80 )  //???????????????80????
		{
			p = ch[cnt];            //?????ch[cnt]???????????
			if ( cnt >= n )
		    	break;
	    	cout << p;             //??????
			num += len[cnt];          //????
			cnt++;
			if ( num + len[cnt] < 80 && cnt < n)  //???????????????1
			{
				num++;
				cout << " ";
			}
			else
			{
				cout << endl;
				num = 0;                      //????????
			}
		}
	}
	return 0;
}
