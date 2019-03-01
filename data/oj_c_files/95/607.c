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


void main()
{
    char s1[80];
	char s2[80];
	int i;
	gets(s1);
	gets(s2);
    for (i=0;s1[i]%32==s2[i]%32 && s1[i]!='\0' && s2[i]!='\0';i++)
	if (s1[i] >96)
	{
		s1[i]-=32;
	}

	if (s2[i] >96)
	{
		s2[i]-=32;
	}
	if (s1[i] < s2[i])
		printf("<\n");
	if (s1[i] > s2[i])
		printf(">\n");
	if (s1[i] == s2[i])
		printf("=\n");
}