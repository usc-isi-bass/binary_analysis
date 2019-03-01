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
	int n;
	scanf("%d",&n);
	int p, q;
	scanf("%d %d",&p,&q);
	float e = (float)q/p;
	int i = 2;
	while(i<=n)
	{
		int x, y;
		scanf("%d %d",&x,&y);
	    float f = (float)y/x;
		if((f-e<=0.05)&&(f-e>=-0.05))
			printf("same\n");
		else if(f<e)
			printf("worse\n");
		else
			printf("better\n");
		i++;
	}
	return 0;
}