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


int main(int argc, char* argv[])
{
	int i, len;
	char s[6], t;

	gets(s);
	len = strlen(s);
	
	for (i = 0; i < (len/2); i++)
	{
		t = s[len - (i+1)];
		s[len-(i+1)] = s[i];
		s[i] = t;
	}
	printf("%s", s);
	return 0;
}