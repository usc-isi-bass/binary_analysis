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
	char ch[101], i, j, q;
	cin.getline(ch,101);
	for(i = 0; ch[i] != '\0'; i++)
	{
		if(ch[i] == ' ')
		{
			if(ch[i+1] == ' ')
			{
				for(j = i; j < 101; j++)
				{
					ch[j] = ch[j + 1];
				}
				i--;
			}
		}
	}
	q = i;
	for(i = 0; i < q; i++)
	{
		cout << ch[i];
	}
	return 0;
}