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
	int n;
	cin >> n;
	for (;;) {
		if (n == 1) {
			cout << "End";
			break;
		}
		else if (n % 2 == 0) {
			cout<<n<<"/"<<"2=";
			n = n / 2;
			cout<<n<<endl;
			continue;
		}
		else {
			cout<<n<<"*3+1=";
			n=n*3+1;
			cout<<n<<endl;
		}
	}
}
