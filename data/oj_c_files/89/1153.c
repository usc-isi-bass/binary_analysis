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

//*************************
//* ??? ??????   *
//* 1200012878 ???     *
//* 12?16?              *
//*************************
struct person
{
	int a;
	int b;
} p[10000] = {{0,0}};
int main()
{
	int n, flag = 0, i, j;
	cin >> n;
	do
	{
		cin >> i >> j;
		if (i == 0 && j == 0)
			break;
		else
		{
			p[i].a++;
			p[j].b++;
		}
	} while(1);
	for (i = 0; i < n; i++)
	{
		if (p[i].a == 0 && p[i].b == n - 1)
		{
			flag = 1;
			cout << i << endl;
		}
	}
	if (flag == 0)
		cout << "NOT FOUND" ;
	return 0;
}