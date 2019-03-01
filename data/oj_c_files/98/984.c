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
	int n;
	cin >> n;
	cin.get();
	char a[90000];
	cin.getline(a, 90000);
	int la = strlen(a);
	int i, j = 80;
	while(j < la)
	{
		for(i = j; i > j - 30; i--)
		{
			if(a[i] == ' ')
			{ a[i] = '~'; break; }
		}
		j = i + 81;
	}
	for(i = 0; i < la; i++)
	{
		if(a[i] != '~')
			cout << a[i];
		else 
			cout << endl;
	}
	return 0;
}