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
	int len,i;
	char a[101],*p = NULL;
	cin.getline(a,101);
	len = strlen(a);
	for (i = 0,p = a; i < len - 1; i++,p++)
		cout << (char) (*p + *(p + 1));
	cout << (char) (a[len - 1] + a[0]) << endl;
return 0;
}