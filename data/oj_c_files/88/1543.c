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
	char *p = NULL;
	char a[31];
	cin.getline(a,31);
	int length = strlen(a), flag = 0;
	p = a;
	for (p = a; p < a + length; p++)
	{
		if ((*p - '0') >= 0 && (*p - '0') <= 9)
		{
			cout<<*p;
			flag = 0;
		}
		else if (flag == 0)
		{

			cout<<endl;
			flag = 1;
			continue;
			
		}
	}
	return 0;
}
