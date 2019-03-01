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
	int i, j, k, lch, lsub ,lre;
	char ch[256];
	char subch[256];
	char replace[256];
	cin >> ch;
	cin >> subch;
	cin >> replace;
	lch = strlen(ch);
	lsub = strlen(subch);
	lre = strlen(replace);
	for (i = 0 ; i < lch ; i++)
	{
		if (ch[i] == subch[0])
		{
			for (j = 0 ; j < lsub ; j++)
			{
				if (ch[i + j] != subch[j])
				break;
			}
			if (j == lsub)
			{
				for (k = 0 ; k < lsub ; k++)
				{
					ch[i + k] = replace[k];
				}
				break;
			}
		}
	}
	for (i = 0 ; i < lch ; i++)
	{
		cout << ch[i];
	}
	return 0;
}
