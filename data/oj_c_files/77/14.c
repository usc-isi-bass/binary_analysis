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
	char s[100];
	char boy, girl, null;
	int i, j, l;
	null = '0';
	scanf ("%s", s);
	l = strlen (s);
	boy = s[0];
	for (i = 0; i < l; i++)
	{
		if (s[i] != s[0])
		{
			girl = s[i];
			break;
		}
	}
	for (i = 0; i < l; i++)
	{
		if (s[i] != null)
		{
		    if (s[i] == girl)
			{
			    for (j = i - 1; j >= 0; j--)
				{
					if (s[j] == boy)
					{
						printf("%d %d\n", j, i);
						s[i] = null;
						s[j] = null;
						break;
					}
				}
			}
		}
	}
	return 0;
}