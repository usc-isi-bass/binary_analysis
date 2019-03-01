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
	int n, i, j, cal;
	cal=1;
	int pd=0;
	int sz[300];
	int xsz[300];
	scanf("%d", &n);
	for(i=0;i<n;i++)
			scanf("%d",&sz[i]);
	xsz[0]=sz[0];
	for(j=1;j<n;j++){
		pd=0;
		for(i=0;i<j;i++){
			if(sz[i]==sz[j])
			pd=1;
		}
		if(pd==0){
		xsz[cal]=sz[j];
			cal++;
		}
	}
	for(i=0;i<cal-1;i++)
	printf("%d,", xsz[i]);
	printf("%d", xsz[cal-1]);
	return 0;
}