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


int main () {
	int n, m;
	while (true) {
		scanf("%d%d", &n, &m);
		if (n == 0 && m == 0) {
			break;
		}
		int count = n;
		int currentIndex = 0;
		int flags[302];
		for (int i = 0; i < n; i++) {
			flags[i] = i + 1;
		}
		while (count != 1) {
			int currentNumber = 1;
			while (currentNumber != m) {
				currentNumber++;
				currentIndex = (currentIndex + 1) % count;
			}
			
			// delete the element in currentIndex.
			for (int i = currentIndex + 1; i < count; i++) {
				flags[i - 1] = flags[i];
			}
			count--;
		}
		printf("%d\n", flags[0]);
	}
}