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

// ?????? ?? 1000062708
int main()
{
	char a[100000], *p;
	int i, f = 0;
	cin.getline(a,100000);
	for(p = a;*p != '\0';p++)
	{
		if(*p != ' ')
		{
			cout << *p;
			f = 0;
		}
		else if(f == 0)
		{
			cout << ' ' ;
			f = 1;
		}
	}
	return 0;
}