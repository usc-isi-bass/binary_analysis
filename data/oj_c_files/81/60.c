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
	int x[100][100],n,m,i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d ",&x[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
	if(n>=0&&n<5&&m>=0&&m<5){
		if(n<=m){
			for(i=0;i<n;i++){
				for(j=0;j<5;j++){
					if(j<4){
					printf("%d ",x[i][j]);
					}else{
						printf("%d\n",x[i][j]);
					}
				}
			}for(j=0;j<5;j++){
				if(j<4){
				printf("%d ",x[m][j]);
				}else{
					printf("%d\n",x[m][j]);
				}
			}for(i=n+1;i<m;i++){
				for(j=0;j<5;j++){
					if(j<4){
					printf("%d ",x[i][j]);
					}else{
						printf("%d\n",x[i][j]);
					}
				}
			}for(j=0;j<5;j++){
				if(j<4){
					printf("%d ",x[n][j]);
				}else{
					printf("%d\n",x[n][j]);
				}
				}
			for(i=m+1;i<5;i++){
				for(j=0;j<5;j++){
					if(j<4){
					printf("%d ",x[i][j]);
					}else{
						printf("%d\n",x[i][j]);
					}
				}
			}}else{
				for(i=0;i<m;i++){
				for(j=0;j<5;j++){
					if(j<4){
					printf("%d ",x[i][j]);
					}else{
						printf("%d\n",x[i][j]);
					}
				}
			}for(j=0;j<5;j++){
					if(j<4){
				printf("%d ",x[n][j]);
					}else{
						printf("%d\n",x[n][j]);
					}
			}for(i=m+1;i<n;i++){
				for(j=0;j<5;j++){
					if(j<4){
					printf("%d ",x[i][j]);
					}else{
						printf("%d\n",x[i][j]);
					}
				}
			}for(j=0;j<5;j++){
				if(j<4){
					printf("%d ",x[m][j]);
				}else{
					printf("%d\n",x[m][j]);
				}
				}
			for(i=n+1;i<5;i++){
				for(j=0;j<5;j++){
					if(j<4){
					printf("%d ",x[i][j]);
					}else{
							printf("%d\n",x[i][j]);
					}
				}
			}}}else{
				printf("error");
			}


	return 0;
}
