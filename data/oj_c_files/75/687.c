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

/***************************************************
?? ??? 1300017667
?? 20101031
?? ?????
***************************************************/
int main()
{
	int n = -1, i, t, man = 0, maxman = 0;
	char c;
	int start[1000], end[1000];						//???????????????
	do
	{
		n ++;
		cin >> start[n];
		c = cin.get();
	}while(c != '\n');								//???????????????????
	for(i = 0; i <= n; i ++)
	{
		cin >> end[i];
		cin.get();
	}
	for(t = 0; t <= 1000; t ++)
	{
		for(i = 0; i <= n; i ++)
		{
			if(t >= start[i] && t < end[i])			//????????
				man ++;
		}
		if(man > maxman)							//????????????????????????????????
			maxman = man;
		man = 0;
	}
	cout << n + 1 << " " << maxman;
	return 0;
}


