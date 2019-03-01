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
	int i,u,a[100];
	for(i=0;i<=n-1;i++){
		scanf("%d",&u);
		a[n-1-i]=u;
	}
	printf("%d",a[0]);
	for(i=1;i<=n-1;i++){
		printf(" %d",a[i]);	
	}
	return 0;
}