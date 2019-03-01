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
int k,m,n,i,a,b,c;
int jz[100][100];
scanf("%d",&k);
for(i=1;i<=k;i++){
	scanf("%d %d",&m,&n);
	for(a=0;a<m;a++){
		for(b=0;b<n;b++){
			scanf("%d",&jz[a][b]);
		}
	}
	c=0;
	for(a=0;a<m;a++){
		for(b=0;b<n;b++){
			if(a==0||b==0){
				c=c+jz[a][b];
			}else if(a==m-1||b==n-1){
				c=c+jz[a][b];
			}
		}
	}
	printf("%d\n",c);
}
	return 0;
}