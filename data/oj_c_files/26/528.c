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
	char a[100];
	int flag[100];
	cin.getline(a,101);
	int i, j, n;
	for (i = 0; a[i] != '\0'; i++)
	{
		flag[i] = 1;
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == ' ' )
		{
			n = i;
			for (j = n + 1; a[j] == ' '; j++)
				if (a[j] == ' ')
					flag[j] = 0; 
			
		}
	}
	for (i = 0; a[i] != '\0'; i++)
		if (flag[i] == 1)
			cout << a[i];
	return 0;
}

	