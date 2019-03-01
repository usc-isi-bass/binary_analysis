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
	int total = 0;
	for(int i=0; i<n; i++) {
		int a,b;
		cin >> a >> b;
		if(b == (a+1)%3) {
			total += 1;
		} else if(a == (b+1)%3) {
			total -= 1;
		}
	}
	if(total > 0) {
		cout << "A" << endl;
	} else if(total < 0) {
		cout << "B" << endl;
	} else {
		cout << "Tie" << endl;
	}
    return 0;
}