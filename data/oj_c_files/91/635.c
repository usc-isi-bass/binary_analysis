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

/*	???:?????
	???:1000012896 leo
	??:2010.12.17
	????:???????
	*/
int main()
{
	char s[101],s_[101];
	int i;
	cin.getline(s, 101);
	for (i = 0; i <= strlen(s) - 2; i++)
		s_[i] = s[i] + s[i + 1];
	s_[strlen(s) - 1] = s[0] + s[strlen(s) - 1];
	s_[strlen(s)] = '\0';
	cout << s_;
	return 0;
}
		