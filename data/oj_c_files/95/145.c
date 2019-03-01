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


int main ()
{
	char s1[80], s2[80];
	int i;
	gets (s1);
	gets (s2);
	for (i = 0; i < 80; i++)
	{
		if (s1[i] == s2[i] || s1[i] == s2[i] + 32 || s1[i] == s2[i] - 32)
		{
			continue;
		}
		else if (s1[i] >= 65 && s1[i] <= 90 && s2[i] >= 65 && s2[i] <= 90)
		{
			if (s1[i] < s2[i])
			{
				printf ("<\n");
				break;
			}
			else if (s1[i] > s2[i])
			{
				printf (">\n");
				break;
			}
		}
		else if (s1[i] >= 97 && s1[i] <= 112 && s2[i] >= 97 && s2[i] <= 112)
		{
			if (s1[i] < s2[i])
			{
				printf ("<\n");
				break;
			}
			else if (s1[i] > s2[i])
			{
				printf (">\n");
				break;
			}
		}
		else if (s1[i] >= 65 && s1[i] <= 90 && s2[i] >= 97 && s2[i] <= 112)
		{
			if (s1[i] + 32 < s2[i])
			{
				printf ("<\n");
				break;
			}
			else if (s1[i] + 32 > s2[i])
			{
                printf (">\n");
				break;
			}
		}
		else if (s1[i] >= 97 && s1[i] <= 112 && s2[i] >= 65 && s2[i] <= 90)
		{
			if (s1[i] - 32 < s2[i])
			{
				printf ("<\n");
				break;
			}
			else if (s1[i] - 32 > s2[i])
			{
                printf (">\n");
				break;
			}
		}
	}
	if (i = 80)
	{
		printf ("=\n");
	}
	return 0;
}