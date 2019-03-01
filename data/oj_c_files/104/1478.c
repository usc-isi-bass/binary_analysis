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

//&#202;&#181;&#214;&#202;&#201;&#207;&#202;&#199;&#193;&#189;&#184;&#246;&#182;&#254;&#189;&#248;&#214;&#198;&#202;&#253;&#163;&#172;×&#238;&#182;à&#199;°&#182;à&#201;&#217;&#206;&#187;&#207;à&#205;&#172;&#163;&#172;&#212;ò&#199;°&#182;à&#201;&#217;&#206;&#187;&#182;&#212;&#211;&#166;&#181;&#196;&#182;&#254;&#189;&#248;&#214;&#198;&#202;&#253;&#188;&#180;&#206;&#170;&#203;ù&#199;ó
//&#199;·&#200;±&#211;&#197;&#187;&#175; 



int main()
{
	int x, y, memo;
	cin >> x >> y;
	memo = y;
	do {
		do {
			if (x == y) {
				cout << x;
				return 0;
			}
			y = y >> 1;
		} while (y);
		x = x >> 1;
		y = memo;
	} while (x);
}