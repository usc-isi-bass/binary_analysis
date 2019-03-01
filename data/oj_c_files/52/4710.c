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



void move(int a[101], int n, int m)
{
    int *p, end;
    end=*(a+n-1);
    for(p=a+n-1; p>a; p--)
    *p=*(p-1);
    *a=end;
    m--;
    if(m>0)
    move(a, n, m);
}

int main()
{
    int a[101];
    int i, first=1;
    int n, m;
        scanf("%d%d", &n, &m);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    move(a, n, m);
    for(i=0; i<n; i++)
	{
		if(first)
			first=0;
		else printf(" ");
		printf("%d", a[i]);
	}
    printf("\n");
    return 0;
}
