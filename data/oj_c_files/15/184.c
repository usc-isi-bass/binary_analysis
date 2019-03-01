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
	int p;
	int i,n,tmp,squar;
	tmp=0;
	scanf("%d",&n);
	for(i=0;i<n*n;i++)
		{
			scanf("%d",&p);
			if(p==0)
				tmp=tmp+1;
			}
	tmp=tmp/4;
	squar=(tmp-1)*(tmp-1);
	printf("%d\n",squar);
}