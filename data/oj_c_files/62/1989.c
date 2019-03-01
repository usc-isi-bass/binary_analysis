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
	int i, flag = 0;
	char *p = NULL;
	char sentence[200];
	cin.getline(sentence,200);
	p = sentence;
	for (i = 0; sentence[i] != '\0'; i++)
	{
		if (sentence[i] != ' ')
		{
			*p = sentence[i];
			p++;
			flag = 1;
			continue;
		}
		if (sentence[i] == ' ' && flag == 1)
		{
			*p = sentence[i];
			p++;
			flag = 0;
		}
	}
	*p = '\0';
    cout << sentence;
	return 0;
}