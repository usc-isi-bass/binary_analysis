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
	char number[100];
	int i, toDevide, tell = 0;
	cin >> number;
	toDevide = number[0] - '0';
	for(i = 1; number[i] != '\0'; i++)
	{
		toDevide = toDevide * 10 + number[i] - '0';
		if(i > 1 || toDevide / 13 != 0)
	         {
                            cout << toDevide / 13;
                            tell++;
                   }
		toDevide %= 13;
	}
         if ( tell == 0) 
              cout << '0';
	cout << endl << toDevide << endl;
	return 0;
}