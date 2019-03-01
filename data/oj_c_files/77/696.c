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

char dui[1000];
int i = -1, p = 0, flag[100];
void rankgame(int s)
{
	if(i + 1 == p && p != 0)return;
	cin.get(dui[s]);
	i ++;
	if(dui[s] != dui[0])
	{
		cout << flag[s - 1] << ' ' << i << endl;
		p = p + 2;
		rankgame(s - 1);
	}
	else
	{
		flag[s] = i;
		s ++;
		rankgame(s);
	}	
}


int main()
{
	rankgame(0);
	return 0;
}

