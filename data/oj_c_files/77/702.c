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


char temp[1000000];
char a,b;

void find (void);

int main (void)
{
	cin.getline(temp,1000000);
	a = temp[0];
	b = temp[strlen(temp)-1];
	find ();

	return 0;
}

void find (void)
{
	int i, index_1, index_2;
	for (i = 0; temp[i] != '\0'; i++)
	{
		if (temp[i] == b)
		{
			index_1 = i;
			temp[i] = ' ';
			break;
		}
	}
	if (temp[i] == '\0')
		return;

	for ( i = index_1; ;i--)
	{
		if (temp[i]==a )
		{
			index_2 = i;
			temp [i] = ' ';
			break;
		}
	}
	cout << index_2<<' '<<index_1 << endl;
	find();
	return;
}

