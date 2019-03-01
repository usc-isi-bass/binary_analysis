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
	int flag = 1;
	char *p, sentence[100];
	cin.getline(sentence, 100, '\n');
	for(p = sentence ; p <= sentence + strlen(sentence) - 1 ; p ++)
	{
		if(*p != ' ')
		{
			cout << *p;
			flag = 1;
		}
		else if(flag)
		{
			cout << ' ';
			flag = 0;
		}
	}
	return 0;
}