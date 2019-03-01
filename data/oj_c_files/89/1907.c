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



const int MAXN = 1000100;

int n, d[MAXN], r[MAXN];

int main()
{
	int x, y, i;
	
	scanf("%d", &n);
	memset(d, 0, sizeof(d));
	memset(r, 0, sizeof(r));
	while (scanf("%d%d", &x, &y), x+y!=0){
		r[x]++;
		d[y]++;
	}
	for (i=0; i<n; i++)
		if (r[i]==0 && d[i]==n-1) break;
	if (i==n)
		printf("NOT FOUND\n");
	else
		printf("%d\n", i);		
		
	return 0;
}
