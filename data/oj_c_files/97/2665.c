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
	int a[101] = {0};
	int n;
	cin >> n;
	while (n>0) {
		if (n>=100) {n-=100;a[100]++;}
		else if (n>=50) {n-=50;a[50]++;}
		else if (n>=20) {n-=20;a[20]++;}
		else if (n>=10) {n-=10;a[10]++;}
		else if (n>=5) {n-=5;a[5]++;}
		else if (n>=1) {n-=1;a[1]++;}
	}
	cout << a[100] << endl;
	cout << a[50] << endl;
	cout << a[20] << endl;
	cout << a[10] << endl;
	cout << a[5] << endl;
	cout << a[1] << endl;
	return 0;
}


