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

int prime(int k)
{
	int i;
	for(i=3;i<=sqrt(k);i+=2)
		if(k%i==0) return 0;
	return 1;
}
void main()
{
	int n,i;
	scanf("%d",&n);
	if(n<5) printf("empty");
	else for(i=3;i<=n-2;i+=2)
		if(prime(i)==1&&prime(i+2)==1)
			printf("%d %d\n",i,i+2);
}