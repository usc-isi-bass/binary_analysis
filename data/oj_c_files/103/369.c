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
	char a[1000];
	int i;
	cin >> a;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i] >= 'a')
			a[i] = a[i] - ('a' - 'A');
	}
	for(i=0;a[i]!='\0';i++)
	{
		int count = 0;
		while(a[i] == a[++i])
		{
			count++;
		}
		count++;
		i--;
		cout << "(" << a[i] << "," << count << ")";
	}
	return 0;
}