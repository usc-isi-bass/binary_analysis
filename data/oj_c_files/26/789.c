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
	char shuru[500];
	cin.getline(shuru,500);
	int i = 0, a = 0, j = 0;
	char *p = NULL;
	a = strlen(shuru);
	p = shuru;
	cout << shuru[0];
    for(i = 0; i <= a - 1; i++)
	{
		if(i >= 1)
		{
			if((shuru[i] == ' ' && shuru[i - 1] != ' ') || shuru[i] != ' ')
				cout << shuru[i];
		}
    }
	return 0;
}