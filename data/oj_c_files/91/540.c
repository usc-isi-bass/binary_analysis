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

//??????????
//??????
//???2010.12.15

int main()
{
	char a[101];                          //??a????????
	char b[101];                          //??b?????????
	int i = 0;
	int length = 0;

	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));

	cin.getline(a,101);

	length = strlen(a);                   //????????
	for (i = 0; i <= length - 2; i++)     //??????????
		b[i] = a[i] + a[i + 1];
	b[i] = a[i] + a[0];                   //??????????????

	for (i = 0; i < length; i++)
		cout << b[i];

	return 0;
}