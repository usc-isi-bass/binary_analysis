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
	int n, i;
	cin >> n;
	char word[1000][41];
	int temp = 0;
	for(i = 0; i < n; i++)
	{
		cin >> word[i];
	}
	for(i = 0; i < n - 1; i++)
	{
		if(temp + strlen(word[i]) + strlen(word[i + 1]) + 1 <= 80)
		{
			cout << word[i] << ' ';
			temp = temp + strlen(word[i]) + 1;
		}
		else
		{
			cout << word[i] << endl;
			temp = 0;
		}
	}
	cout << word[n - 1]; 
	return 0;
}