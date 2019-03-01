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
	int i,l,flag;
	char s[31];
	cin.getline (s,31);
	l = strlen (s);
	flag = 0;
	for (i = 0; i <= l-1 ; i++)
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			flag = 1;
			cout << s[i];
		}
		else
		{
			if (flag == 1) 
				cout << endl;
			flag = 0;
		}
	return 0;
}
