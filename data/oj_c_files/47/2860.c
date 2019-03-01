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



void main()
{
	int n,a[MAX];
	int *p;
	scanf("%d",&n);
	for(p=&a[0];p<&a[0]+n;p++)
		scanf("%d",p);
	
	for(p=&a[0]+n-1;p>=&a[0];p--){
		if(p==&a[0]+n-1)
			printf("%d",*p);
		else
			printf(" %d",*p);
	}
	printf("\n");
}
