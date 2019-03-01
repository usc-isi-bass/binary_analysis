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

//*************************************************
//***?????2?N??***
//***??????***
//***???2013.1.13***
//*************************************************
int a[100];

void f()
{
	int i,t = 0;
	for (i = 0; i < 100; i++)
	{
		a[i] = a[i] * 2 + t;
		t = a[i] / 10;
		a[i] = a[i] % 10;
	}
}

int main ()
{
	int N,i,j;
	memset(a,0,sizeof(a));
	a[0] = 1;
	cin >> N;
	for (i = 0; i < N; i++)
	{
		f();
	}
	i = 99;
	while (a[i] == 0)
		i--;
	for (j = i; j >= 0; j--)
		cout << a[j];
	cout << endl;
	return 0;
}


