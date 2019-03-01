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
	int t[105];
	int n,m;
	int *tt[105];//????>_< 
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= n;i ++){
		scanf("%d",&t[i]);
		tt[i] = &t[i];//??? 
	}
	for(int i = 1;i <= m;i ++){
		int p = *tt[n];
		for(int j = n;j >= 2;j --)
			*tt[j] = *tt[j-1];//??????= = 
		*tt[1] = p;
	}
	printf("%d",t[1]);
	for(int i =2;i <= n;i ++) printf(" %d",t[i]);
	printf("\n");
	return 0;
}