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
	char a[101], b[101];
	int i;
	cin.getline(a,101);
	int l = strlen(a);
	for (i = 0; i < l - 1; i++)
		b[i] = a[i] + a[i + 1];
	b[l - 1] = a[l - 1] + a[0]; 
	for (i = 0; i < l - 1; i++)
		cout << b[i];
	cout << b[l - 1] << endl;
	return 0;


}

