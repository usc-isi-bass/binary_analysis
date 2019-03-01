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

// state: 0( left up ), 1( right down)
int main()
{
	int state = 0;
	int n, t, i, j,m,m1,m2;
	int leftx, lefty, rightx, righty;
	scanf("%d", &n);

	for ( i = 0; i < n; i++ ) {
		for ( j = 0; j < n; j++ ) {
			scanf("%d", &t);
			if ( t == 0 ) {
				if ( state == 0 ) {
					leftx = i;
					lefty = j;
					state = 1;
				} else {
					rightx = i;
					righty = j;
				}
			}
		}
	}
    m1 = (rightx-leftx-1);
	m2 = (righty-lefty-1);
    m = m1*m2;
	printf("%d", m);
	return 0;

}