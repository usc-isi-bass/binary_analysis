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
	int find(int,int);
	int t,m,n;
	scanf("%d",&t);
	while (t-->0)
	{
		scanf("%d%d",&m,&n);
		printf("%d\n",find(m,n));
	}
	return 0;
}

int find(int m,int n)
{
//	printf("%d %d\n",m,n);
	if (m==1 || m==0) return (1);
	else if (n==1) return (1);
		else
			if (m>=n) return (find(m-n,n)+find(m,n-1));
			else return (find(m,n-1));
}