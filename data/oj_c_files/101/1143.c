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


int main(){
	int a, b, c;
	int ra, rb, rc;
	char res[4];

	for (a = 0; a < 3; a++)
		for (b = 0; b < 3; b++){
			if (b == a)	continue;
			for (c = 0; c < 3; c++){
				if (c == a || c == b)	continue;
				ra = rb = rc = 0;

				ra = (b > a) + (c == a);
				rb = (a > b) + (a > c);
				rc = (c > b) + (b > a);

				if ((a > b && ra > rb)
					|| (a > c && ra > rc)
					|| (b > c && rb > rc))
					continue;

				res[a] = 'A';
				res[b] = 'B';
				res[c] = 'C';
				res[3] = '\0';
			}
		}
	cout << res << endl;
	return 0;
}