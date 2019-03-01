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
	char sen[101], rsen[101];
	while (cin >> sen)
	{
		int pos[101], num = 0, i, t = 0;
	cout <<  sen << endl;
	for (i = 0; i <= strlen(sen) - 1; i++)
	{
		if (sen[i] == '(')
		{
			num++;
			pos[num] = i;
			rsen[i] = '$'; 
		}
		else if (sen[i] == ')')
		{
			if (num > 0)
			{
				rsen[pos[num]] = ' ';
				rsen[i] = ' ';
				num--;
			}
			else
			{
				rsen[i] = '?';
			}
		}
		else
		{
			rsen[i] = ' ';
		}
	}
	if (num != 0)
	{
		for (i = 1; i <= num; i++)
		{
			rsen[pos[num]] = '$';
		}
	}
	for (i = 0; i <= strlen(sen) - 2; i++)
	{
		cout << rsen[i];
	}
	cout << rsen[strlen(sen) - 1] << endl;
	};
	return 0;
}