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
	int n, a[10000], temp;
	int *p = NULL;
	cin >> n;
	for(int i = 0; i < n; i ++)
		cin >> a[i];
	p = a;
	for(int j = 0; j < n/2; j ++){
		temp = *(p+j);
		*(p+j) = *(p+n-1-j);
		*(p+n-1-j) = temp;
	}
	cout << *p;
	p++;
	for(int i = 1; i < n; i ++ ,p ++)
		cout << ' ' << *p;
	return 0;
}