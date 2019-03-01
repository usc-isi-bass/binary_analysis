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

int main(){
	int n,x,y,i;
	double jiwei,tmp;
	scanf("%d",&n);
	scanf("%d%d",&x,&y);
	jiwei=1.0*y/x;
	for (i=1;i<n;i++)
		{
		scanf("%d%d",&x,&y);
		tmp=1.0*y/x;
		if (tmp-jiwei>0.05)
			printf("better\n");
		else if (jiwei-tmp>0.05)
			printf("worse\n");
			else printf("same\n");
		}
	return 0;
}