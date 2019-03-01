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
	char s[110], s1[110],
		 *sf1 = NULL, *sf2 = NULL,
		 *s11 = NULL;
	cin.getline(s,110);
	sf1 = s;
	sf2 = s + 1;
	s11 = s1;
	while(*sf2 != '\0')
	{
		*s11 = *sf1 + *sf2;
		s11++;
		sf1++;
		sf2++;
	}
	sf2 = s;
	*s11 = *sf1 + *sf2;
	*++s11 = '\0';
	cout << s1;
	return 0;
}