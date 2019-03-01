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

	int s, x, i,n,t;
	scanf("%d", &n);
	s=0;
	for(i=0; i<n; i++) {
		scanf("%d", &x);
	if (x>=s) 
               {
		       t=s;
               s=x;         
		}
        else if (x>t) 
        {
			t=x;
        }
	}
	printf("%d\n", s);
	printf("%d", t);
		return 0;
}