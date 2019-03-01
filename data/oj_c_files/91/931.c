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
	char a[101], *p = NULL, b[101];
	int A[101], *q = NULL, *s = NULL, B[101], i;
	cin.getline(a, 101);
	for(p = a, q = A; ;p++, q++)
	{
		if(*p == '\0')
			break;
		else
		{
			*q = *p;
		}
	}
	for(i = 0, s = A; s < q - 1;i++, s++)
	{
		B[i] = *s + *(s+1);
		b[i] = B[i];
	}
	B[i] = *A + *s;
	b[i] = B[i];
	for(p = b; p <= b + i; p++)
	{
		cout << *p;
	}
	cout << endl;
	return 0;
}

