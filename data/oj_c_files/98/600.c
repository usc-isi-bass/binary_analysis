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
	int n, l, line = 0;
	int i;
	char word[1000][40];
	cin >> n;
	cin >> word[0];
	line = strlen(word[0]);
	cout<< word[0];
	for (i = 1; i< n; i++)
	{
		cin>>word[i];
		l = strlen(word[i]);
		line = line + l +1;
		if(line <=80)
			cout << ' ' << word[i];
		else
		{
			cout<< endl << word[i];
			line = l;
		}
	}
	return 0;
}
