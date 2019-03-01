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
	char c[108];
	int l;
	char key;
	int i, j;
	int a[100];
	int count = 0;

	cin >> c;

	l = strlen(c);
	key = c[0];

	for(i = 0; i < l; i ++)
	if(c[i] != key)
	{
		a[count] = i;
		count ++;
	}

	for(i = 0; i < l / 2; i ++)
	{
		for(j = a[i]; j >= 0; j --)
			if(c[j] == key)
			{
				cout << j << " " << a[i] << endl;
				c[j] = key + 1;
				break;
			}
	}



	return 0;
}






