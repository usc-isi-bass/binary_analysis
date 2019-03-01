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

struct person
{
	int kn;
	int bkn;
};
main()
{
	int n,a,b,i;
	struct person *p;
	scanf("%d",&n);
	p=(struct person *)malloc(n*sizeof(struct person));
	for (i=0;i<n;i++)
	{
		p[i].kn=0;
		p[i].bkn=0;
	}
	while (1)
	{
		scanf("%d %d",&a,&b);
		if (a==0 && b==0)
			break;
		p[a].kn++;
		p[b].bkn++;
	}
	for (i=0;i<n;i++)
	{
	    if (p[i].kn==0 && p[i].bkn==n-1)
			printf("%d\n",i);
	}
	free(p);
}