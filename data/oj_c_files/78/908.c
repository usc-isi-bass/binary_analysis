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
	int z, q, s, l;
	for (z = 1; z < 6; ++z) {						// ???????? 
		for (q = 1; q < 6; ++q) {					// ???????? 
			for (s = 1; s < 6; ++s) {				// ???????? 
				for (l = 1; l < 6; ++l) {			// ???????? 
					if (z + q != s + l) continue;	// ?????????? 
					if (z + l <= s + q) continue;
					if (z + s >= q) continue;
					printf("l %d\nq %d\nz %d\ns %d\n", l*10, q*10, z*10, s*10);
				}
			}
		}
	}
	return 0;
}