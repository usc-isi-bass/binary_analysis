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

int main(){
	int n,i,j,x,y,p,q,s,t,a[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(*(*(a+i)+j)==0)
		{x=i;y=j;break;}
	for(p=n-1;p>=0;p--)
			for(q=n-1;q>=0;q--)
				if(*(*(a+p)+q)==0)
		{s=p;t=q;break;}
		printf("%d",(x-s-1)*(t-y-1));
	return 0;}
