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
	int i, j, count = 1;
	char a[1005], x;
	cin >> a;
	for(i = 0; i < strlen(a); i++)
	{
		if(a[i] > 96 && a[i] < 123)
			a[i] -= 32;
	}
	for(i = 0; i < strlen(a);)
	{
		x = a[i];
		for(j = i + 1; j < strlen(a); j++)
	    {
		    if(x != a[j])
			{
				cout << "(" << a[i] << "," << j - i << ")";
				break;
			}
    	}
		if(j == strlen(a))
		{
			cout << "(" << a[i] << "," << j - i << ")";
		}
		i = j;
	}

	return 0;   
}