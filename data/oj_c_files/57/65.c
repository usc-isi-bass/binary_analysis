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
	int n;
	char s[300];
	int i;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%s", s);
		i = strlen(s)-1;
		if(s[i] == 'r')
			s[i-1] = '\0';
		if(s[i] == 'y')
			s[i-1] = '\0';
		if(s[i] == 'g')
			s[i-2] = '\0';
		printf("%s\n", s);
	}
	return 0;
}