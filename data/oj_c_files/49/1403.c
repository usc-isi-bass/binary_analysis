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
	char str[530];
	int i,j, lng, len, h, k;
	cin >> str;
	len = strlen(str);
	for (lng = 2; lng <= len; lng++)
		for(h = 0; h < len; h++)
		{
			i = h;
			j = h + lng - 1;
			while (i < j)
			{
				if(str[i] != str[j])
					break;
				i++;
				j--;
			}
			if(i == j || i > j)
			{
				for (k = 0; k < lng - 1; k++)
					cout << str[h + k];
				cout << str[h + k] << endl;
			}
		}
	return 0;
}