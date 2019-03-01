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


int mycompare(const void* e1, const void* e2)
{
	return *((int*)e2) - *((int*)e1);
}

int main()
{
	int n, s[101];
	scanf("%d", &n);
	for(int i = 0; i < n; i ++)
	{
		scanf("%d", &s[i]);
	}
	qsort(s, n, sizeof(int), mycompare);
	cout << s[0] << endl << s[1] << endl;
	
	return 0;
}