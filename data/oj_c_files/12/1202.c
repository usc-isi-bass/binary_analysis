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

//*******************************************************
//*  ?  ?: ??                                       *
//*  ?  ?: ???  1200012861                         *
//*  ?  ?: 2012?10?9?                              *
//*******************************************************
int main()
{
	int n, num[15], i, j, s, t, answer;
	while (cin >> num[0])
	{
		if (num[0] == -1)
			break;                                   //???????-1?????
		j = 0;                                       //???????j
		answer = 0;                                  //??????????????
		do
		{
			j++;
			cin >> num[j];                           //????
		}
		while (num[j] != 0);                         //????0?????
		for (s = 0; s < j; s++)
		{
			for (t = 0; t < j; t++)
			{
				if (num[t] == 2 * num[s])            //?????????????
					answer++;                        //??+1
			}
		}
		cout << answer << endl;
	}
return 0;
}
