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
	char word[100];
	int i, len, flag = 0;
	cin.getline(word, 100);
	len = strlen(word);
	for (i = 0; i < len; i++)
	{
		if (word[i] != ' ')
		{	
			cout << word[i];
			flag = 1;
		}
		else if (flag == 1)
		{
			cout << " ";
			flag = 0;
		}
	}
	return 0;
}
