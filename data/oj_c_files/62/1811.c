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

char str[100] = {0};
int flag = 0;
int len;
void clear (char *a)
{
	if(a == str)
	{
		cout << *a ;
		return;
	}
	else
		if(*a == 32 && flag != 0)
			clear (a - 1);
		else
			if (*a == 32)
			{
				flag ++;
				clear(a-1);
				cout << ' ';
			}
			else
			{
				flag = 0;
				clear (a-1);
				cout << *a;
			}
}				

int main()
{
	cin.getline(str,100);
    len = strlen(str);
	clear (str+len-1);
	return 0;
}


