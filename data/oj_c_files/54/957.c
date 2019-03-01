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


int ok(int m,int n,int k);
void main()
{
	int m,n,k;
	scanf("%d%d",&n,&k);
	for(m=1;;m++){
		if(ok(m,n,k))
			break;
	}
	printf("%d\n",m);
}
int ok(int m,int n,int k)
{
	int i;
	for(i=1;i<=n;i++){
		if(m/n<1||m%n!=k) return 0;
		m=m-m%n-m/n;
	}
	return 1;
}
