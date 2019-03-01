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
	int n, i;
	float k, p, q;
	scanf("%d%f%f",&n, &p, &q);
	k=q/p;
	for(i=0;i<n-1;i++)
	{
		float a, b;
		scanf("%f%f",&a, &b);
		if(b/a-k>0.05) printf("better\n");
		else if(k-b/a>0.05) printf("worse\n");
		else printf("same\n");
	}
	return 0;
}