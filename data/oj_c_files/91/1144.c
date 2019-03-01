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
	int i , j, k;
	char s[150] = {0};
	char s1[150] = {0};
	gets(s) ;
	for ( i = 0; i <= strlen(s) - 2 ; i++ )
	{
		s1[i] = s[i] + s[ i + 1];
		cout << s1[i] ;
	}
	s1[strlen(s) - 1] = s[ strlen(s) -1] + s[0];
	cout << s1[strlen(s) -1] <<endl;
	return 0;
}
