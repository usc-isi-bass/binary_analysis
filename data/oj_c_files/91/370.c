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
	char c, str[100], s1[100];
	int i, num = 0;
	gets(str);
	for (i = 0;str[i] != '\0';i++)
		num++;
	for (i = 0;i < num - 1;i++)
	{
		s1[i] = str[i + 1] + str[i];
	}
	s1[num - 1] = str[num-1] + str[0];
	s1[num] = '\0';
	puts(s1);
	return 0;
} 