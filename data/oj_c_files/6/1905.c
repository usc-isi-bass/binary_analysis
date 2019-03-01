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
	int c1,c2,d,i,x=0,k,m,n;
	int sum[L];
	int a[L][L],b[L];
	scanf("%d",&k);
	for(i=0;i<L;i++){
		sum[i]=0;
	}
	for(i=0;i<k;i++){
	scanf("%d %d",&m,&n);
	for(c1=0;c1<m;c1++){
		for(c2=0;c2<n;c2++){
			scanf("%d",&a[c1][c2]);
		}
	}
	for(d=0;d<m;d++){
		sum[x]+=a[d][0]+a[d][n-1];
	}
	for(d=1;d<n-1;d++){
		sum[x]+=a[0][d]+a[m-1][d];
	}
	x++;
	}
	for(i=0;i<x;i++){
	printf("%d\n",sum[i]);
	}
	return 0;
	
}