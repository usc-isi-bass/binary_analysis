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
	char word[100];
	char output[100];
	int i = 0, flag = 0;
	int p = 0;
	cin.getline(word, 100);
	for (; word[i] != '\0'; i++)
	{
		if (flag == 1 && word[i] == ' ')
		{
			continue;
		}
		if (word[i] != ' ')
			flag = 0;
		else 
			flag = 1;
		output[p++] = word[i];
		output[p] = '\0';
	}
	cout << output << endl;
	return 0;
}

