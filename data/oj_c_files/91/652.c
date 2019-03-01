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
	int i = 0, j = 0;
    char s[101], s1[101];
	cin.getline(s, 101);
	while(s[i + 1] != '\0')
	{
		s1[j++] = s[i] + s[i + 1];
		i++;
	}
	s1[j++] = s[i] + s[0];
	s1[j] = '\0';
	cout << s1 << endl;
    return 0;
}
