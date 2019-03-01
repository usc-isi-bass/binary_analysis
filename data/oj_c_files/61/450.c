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

int n;
int a[100];
int main(){
	a[1] = 1;
	a[2] = 1;
	for(int i = 3; i <= 20; i++){
		a[i] = a[i-1] + a[i-2];
	}
	cin >> n;
	int t;
	for(int i = 0; i < n; i++){
		cin >> t;
		cout << a[t] << endl;
	}
	
}