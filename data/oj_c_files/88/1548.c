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

/**
  *file  ????
  *author ???
  *date   12.9
  *function		???????????????????????
  ?????????????????????????????????????
*/
int main()
{
	char a[100] = {0}, *p = NULL;
	int flag = 0, lena;
	p = a;
		memset(a,0,100);
		cin.getline(a,100);
		lena = strlen(a);
		while(*p != '\0')
		{
			if(*p <= '9' && *p >= '0')
			{
				cout << *p;
				flag = 1;
			}
			else
			{
				if(flag)
				{
					cout << endl;
					flag = 0;
				}
			}
			p++;
		}
		if(*(p + lena - 1) <= '9' && *(p + lena - 1) >= '0')
		{
			cout << endl;
		}
	return 0;
}