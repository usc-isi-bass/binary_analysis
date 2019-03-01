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


int LanJieShu( int x, int y, int c[])
{
	int j, t;
	if( x == y - 1)
		return 1;
	t = 0;
    for(j = x + 1; j < y; j ++)
	{
		if((c[j] <= c[x]) && (LanJieShu(j, y, c) > t))
			t = LanJieShu(j, y, c);
	}
	return(t + 1);
}
void main()
{
	int n, i, u;
	int a[26], b[26];
	scanf("%d", &n);
	for(i = 0; i < n; i ++)
		scanf("%d", &a[i]);
    for(i = 0; i < n; i ++)
        b[i] = LanJieShu( i, n, a);
    u = 0;
	for(i = 0; i < n; i ++)
	{
		if(b[i] >= u)
			u = b[i];
	}
	printf("%d\n", u);
}