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
	int n, a, b, i, f = 1;

	typedef struct P
	{
		int known;
		int know;
	}peo;
	peo * p;
	scanf("%d", & n);
	p = (peo *)malloc(sizeof(peo) * n);

	for(i = 0; i < n; i++)
	{
		p[i].know = 0;
		p[i].known = 0;
	}

	scanf("%d%d", & a, & b);
	for(; ! (a == 0 && b == 0); )
	{	
		p[a].know++;
		p[b].known++;	
		scanf("%d%d", & a, & b);
	}
	for(i = 0; i < n; i++)
	{
		if((p[i].know < n - 1) && (p[i].known == n - 1))
		{
			f = 0;
			printf("%d",i);
		}
	}
	if(f)
		printf("NOT FOUND\n");
}
