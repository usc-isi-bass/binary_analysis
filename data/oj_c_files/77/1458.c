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


char str[100], b, g;
void match(int k)
{
	int i;
	if(str[k] == '\0')
		return;
	if(str[k] == g)
	{
		str[k] = '*';
		for(i = k - 1; i >= 0; i--)
			if(str[i] == b)
			{
				str[i] = '*';
				cout << i << " " << k << endl;
				break;
			}
	}
	match(k + 1);
}

int main()
{
	int length;
	cin.getline(str,100);
	length = strlen(str);
	b = str[0];
	g = str[length - 1];
	match(0);
	return 0;
}




	
