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
		i = 0;
		while(s[i] != '\0')
		{
			if(s[i] == 'A')
			printf("T");
			if(s[i] == 'T')
			printf("A");
			if(s[i] == 'G')
			printf("C");
			if(s[i] == 'C')
			printf("G");
			i++;
		}
		printf("\n");
	}
	return 0;
}