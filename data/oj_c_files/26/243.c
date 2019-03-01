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

void filter(char *p)
{
	char *p1 = NULL;
	p1 = p;
	while (*p != 0)
	{
		while((*p != ' ') && (*p != 0))
		{
			
			*p1 = *p;
			cout << *p1;
			p1++;
			p++;
		}
		while ((*p == ' '))
		{
			p++;
		}
		if ((p - p1 > 0) && (*p != 0))
		{
			*p1++ = *(p - 1);
			cout << *(p1 - 1);
			//*p1 = *p;
			//cout << *p1<<2;
		}
	}
	cout << endl;
	//cout << *p << endl;
	//cout << p1 << endl;
	return;
}
int main()
{
	char str[105];
	cin.getline(str,105);
	filter(str);
//	cout << str << endl;

	return 0;
}