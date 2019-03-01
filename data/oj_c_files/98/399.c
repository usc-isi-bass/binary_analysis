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

//????
int main()
{
	int n, num = 0;
	char word[41];
	cin >> n;
	for(int k = 0; k < n; k++)
	{
		cin >> word;
		if(num == 0)
		{
			cout << word;
			num += strlen(word);
			continue;
		}
		num += strlen(word) + 1;
		if(num <= 80)
		{
			cout << ' ' << word;
		}
		else
		{
			cout << endl << word;
			num = strlen(word);
		}
	}
	return 0;
}