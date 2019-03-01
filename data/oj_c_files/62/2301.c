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
	char a[100][100];
	int n;
	for(int i = 0; i < 100; i ++){
		cin >> a[i];
		char q = getchar();
		if(q == '\n'){//????????
			n = i + 1;
			break;
		}
	}
	cout << a[0];
	for(int k = 1; k < n; k ++)
		cout << " " << a[k];
	return 0;
}