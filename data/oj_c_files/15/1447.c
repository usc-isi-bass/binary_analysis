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
	int i,j,n,a,b,c,d,sz[1000][1000],s;
	scanf("%d",&n);     
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(sz[i][j]==0&&sz[i][j+1]==0&&sz[i+1][j]==0){
				a=i;
				b=j;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(sz[i][j]==0&&sz[i][j-1]==0&&sz[i-1][j]==0){
				c=i;
				d=j;
			}
		}
	}
	s=(c-a-1)*(d-b-1);
	printf("%d",s);
	return 0;
}
