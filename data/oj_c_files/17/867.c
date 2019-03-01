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

char s[1000];
void right(int i ,int j)//i????????
{
	if (s[i] == '\0');
	else if (s[i] == '(')
	{
		s[i] = '$'; right(i + 1, j + 1);
	}
	else if (s[i] == ')')
	{
		if (j == 0){ s[i] = '?'; right(i + 1, j); }
		else {
			for (int k = i;;k--)
			if (s[k] == '$'){
				s[k] = ' '; break;
			}
			s[i] = ' ';
			right(i + 1, j - 1);
		}
	}
	else
	{
		s[i] = ' '; right(i + 1, j);
	}
}
int main()
{
	for (; cin >> s;){
		cout << s << endl;		
		right( 0,0);
		cout << s << endl;
	}
}