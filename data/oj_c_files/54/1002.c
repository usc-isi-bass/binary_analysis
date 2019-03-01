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


int minm(int n,int k);
void main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%d\n",minm(n,k));
}
int minm(int n,int k)
{
	int i,j,m;
	m=n-1;
	for(j=1;;j++){
		m=j*(n-1);
		for(i=1;i<=n;i++){
			if(m%(n-1)!=0) break;
			m=m+m/(n-1)+k;
			if(i==n) return m;
		}
	}
}