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

/**
* @file homework.cpp
* @author ???
* @date 2011-11-16
* @description
* ??????: ????
*/
void Paidui(char[], int);

int main()
{
	int i;
	char a[1000];
	cin.getline(a, 1000);
	for (i = 1; a[i] != '\0'; i++) // ???1????2
	{
		if (a[i] == a[0]) a[i] = 1;
		else a[i] = 2;
	}
	a[0] = 1;
	Paidui(a, 0);
	return 0;
}

// ?????b????j????????????
void Paidui(char b[], int j)
{
	if (b[j] == 2) // ???????
	{
		int k;
		for(k = j - 1; k >= 0; k--) // ?????????
		{
			if (b[k] == 1)
			{
				cout << k << " " << j << endl;
				b[k] = 0; // ??????
				b[j] = 0; // ??????
				break;
			}
		}
	}
	if (b[0] == 0) return; // ?????????????
	Paidui(b, j+1); // ??????
}