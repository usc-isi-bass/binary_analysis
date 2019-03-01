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

int main ()
{
	char a[101] = {'\0'};
	cin.getline(a, 101);
	int len = strlen(a);
	for(int i = 0; i < len; i ++)
	if((a[i] != ' ') || ((a[i] == ' ') && (a[i+1] != ' ')))//?????????????????????
		cout << a[i];
	return 0;
}