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
	int N;
	scanf("%d",&N);
	int i,sz[1000];
	double sum=1;
	for(i=1;i<=N;i++){
		sz[i]=2;
		sum=sum*sz[i];
	}
	printf("%.0lf",sum);
	return 0;
}