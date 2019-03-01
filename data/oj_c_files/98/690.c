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
	int i,n,count = 0;
	char word[1000][40];
	cin >> n;
	for(i = 0 ; i < n ; i++)
	{
		cin >> word[i];
	}
	cout << word[0];
	count = count + strlen(word[0]) + 1;
	for(i = 1 ; i < n; i++)
	{
		if(count + strlen(word[i]) > 80)
		{
			cout << endl;
			count = strlen(word[i]) + 1;
			cout << word[i];
		}
		else
		{
			cout << " " << word[i];
			count = count + strlen(word[i]) + 1;
		}
	}
	return 0;
}