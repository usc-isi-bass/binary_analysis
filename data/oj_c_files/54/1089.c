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

int f() 
{
	int n,k,m,i;
    scanf("%d %d", &n, &k);
    int last = 0;
	while (1) 
	{
		last++;
		m = last * n + k;
		int t = 1;
        for (i = 1; (i < n) && t; i++) 
		{
			t = (m % (n - 1) == 0);
			m = m / (n - 1) * n + k;
		}
		if (t)
			break;
	}
	printf("%d\n", m);
	
  return 0;
}

int main() 
{
	f();
}
