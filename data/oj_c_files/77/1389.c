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

//*******************
// 1.cpp 
// ??  1200018415
// 2012 11 27
//*******************

char str[101], b, g;
int match(int, char, char);

int main()
{
	
	int len, i;
	cin >> str;   
	len = strlen(str);
	b = str[0];
	g = str[len - 1];
	match(0, b, g);                 // ????
	return 0;
}

int match(int n, char b, char g)
{
	for (int i = n; str[i] != '\0'; i++)
	{
		while (str[n] == '*')                // ???????
		{
			n++;                             // ????
		}
		if (str[i] == b)                     // ?????
		{
			str[i] = '*';                    // ????
			int k = match(n + 1, b, g);      // ??????
			cout << n << " " << k << endl;
		}
		else
			if (str[i] == g)                // ?????
			{
				str[i] = '*';               // ??
				return n;                   // ?????
			}
	}
}




