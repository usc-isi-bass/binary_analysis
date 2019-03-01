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
	int n, shou, shu, x, t = 0, y = 0;//?n??????shou?????shu????
	cin >> n;
	for(int i = 1; i <= n; i++ )
	{
		cin >> shou >> shu;
		if (( shou >= 90 ) && ( shou <= 140 ) && ( shu >= 60 ) && ( shu <= 90 ))//??????90-140???????60-90?????
			t = t + 1;
		if (( shou < 90 ) || ( shou > 140 ) || ( shu < 60 ) || ( shu > 90 ))
		{
			x = t;//?????????????????
			t = 0;//?t????x,??t???0
			if( x > y )
			y = x;//??x??y,??x???y
		}
	}
	if( t > y )
		cout << t << endl;
	else
		cout << y << endl;//????????????
return 0;
}