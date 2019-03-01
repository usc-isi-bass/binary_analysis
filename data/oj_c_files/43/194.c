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

int p(int n)
{
	int j,b;
	if(n<2)return 0;
	b=(int)sqrt(n);
	if(n==2) return 1;
	for(j=2;j<=b;j++)
		if(n%j==0) return 0;
	return 1;
}
int main()
{
	int m,j;
	scanf("%d",&m);
	for(j=2;j<=m/2;j+=1)
		if(p(j)&&p(m-j))printf("%d %d\n\n",j,m-j);
	return 0;
}
