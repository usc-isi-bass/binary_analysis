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

/*
			? ? ??????
			?????20110102
			?    ?????
			?????????????????
**/
void check(int *a);
int g_lenth;
int main()
{
	char a[101];
	int b[100];
	cin.getline(a, 101);
	g_lenth = strlen(a);
	for(int i = 0; i < g_lenth; i++)
	{
		if(a[i] == a[0])
			b[i] = 1;
		else
			b[i] = 2;
	}
	check(b);
	return 0;
}
void check(int *a)
{
	for(int i = 0; i < g_lenth; i++)
		if(a[i] == 2)
			for(int j = i - 1; j >= 0; j--)
				if(a[j] == 1)
				{
					cout << j << ' ' << i << endl;
					a[i] = 0;
					a[j] = 0;
					return check(a);
				}
}