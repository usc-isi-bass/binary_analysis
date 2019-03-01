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
	char s[257], sub[50], rep[50];
	int i, j, t, k;
	int len_s, len_sub;
	cin.getline(s, 257);
	cin.getline(sub, 50);
	cin.getline(rep, 50);
	len_s = strlen(s);
	len_sub = strlen(sub);
	for (t = 0; t < len_s; t++)
	{
		if (s[t] == sub[0])
		{
			for (i = 0; i < len_sub; i++)
			{
				if (s[t + i] != sub[i])
					break;
			}
			if (i == len_sub)
				break;
		}
	}
	if (t == len_s)
		cout << s << endl;
	else
	{
		for (i = 0; i < t; i++)
			cout << s[i];
		cout << rep;
		for (k = 0; s[i + len_sub + k] != '\0'; k++)
			cout << s[i + len_sub + k];
		cout << endl;
	}
	return 0;
}