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
	int m,n,p,i,j;
	int sz[5][5];
	for(int i=0; i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&(sz[i][j]));
		}
	}
	scanf("%d %d",&n,&m);
	if((m>-1)&&(m<5)&&(n>-1)&&(n<5)){
		if(m<=n){
			for(i=0;i<m;i++){
				for(j=0;j<4;j++){
					printf("%d ",sz[i][j]);
				}
				printf("%d\n",sz[i][4]);
			}
			for(j=0;j<4;j++){
				printf("%d ",sz[n][j]);
			}
			printf("%d\n",sz[n][4]);
			for(i=m+1;i<n;i++){
				for(j=0;j<4;j++){
					printf("%d ",sz[i][j]);
				}
				printf("%d\n",sz[i][4]);
			}
			for(j=0;j<4;j++){
				printf("%d ",sz[m][j]);
			}
			printf("%d\n",sz[m][4]);
			for(i=n+1;i<5;i++){
				for(j=0;j<4;j++){
					printf("%d ",sz[i][j]);
				}
				printf("%d\n",sz[i][4]);
			}
		}
		if(m>n){
			for(i=0;i<n;i++){
				for(j=0;j<4;j++){
					printf("%d ",sz[i][j]);
				}
				printf("%d\n",sz[i][4]);
			}
			for(j=0;j<4;j++){
				printf("%d ",sz[m][j]);
			}
			printf("%d\n",sz[m][4]);
			for(i=n+1;i<m;i++){
				for(j=0;j<4;j++){
					printf("%d ",sz[i][j]);
				}
				printf("%d\n",sz[i][4]);
			}
			for(j=0;j<4;j++){
				printf("%d ",sz[n][j]);
			}
			printf("%d\n",sz[n][4]);
			for(i=m+1;i<5;i++){
				for(j=0;j<4;j++){
					printf("%d ",sz[i][j]);
				}
				printf("%d\n",sz[i][4]);
			}
		}
	}
	else{
		printf("error");
	}
	return 0;
}
		