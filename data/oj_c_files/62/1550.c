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

int main() {
	char a[100], b[100];
	cin.getline(a, 100);
	char *p1, *p2;
	int len = strlen ( a );
	p2 = b;
	for ( p1 = a; p1 <= a + len - 1; p1 ++) {
		if ( * p1 != ' ' ) * ( p2 ++ ) = * p1;
		else if ( * p1 == ' ' && * ( p1 + 1 ) != ' ' ) * ( p2 ++ ) = ' ';
	}
	* p2 = '\0';
	cout << b << endl;
	return 0;
}
