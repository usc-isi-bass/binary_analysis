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

int main(int argc, char* argv[])
{
	int n,i;
	scanf("%d",&n);
	int m[NUMBER];
	for(i=0;i<n;i++){
	scanf("%d",&m[i]);
	}
	int q;
	printf("%d",m[n-1]);
	for(q=n-2;q>=0;q--){
	printf(" %d",m[q]);
	}
	return 0;
}