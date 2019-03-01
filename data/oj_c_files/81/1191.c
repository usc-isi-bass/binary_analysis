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

int judge (int x,int y);
int main(){
	int sz[5][5];
	int n,m;
	int result;
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
	result=judge(n,m);
	int k[5];
	if(result==0){
		printf("error");
	}else if(result==1){
		for(i=0;i<5;i++){
			k[i]=sz[n][i];
			sz[n][i]=sz[m][i];
			sz[m][i]=k[i];
		}
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(j!=4){
					printf("%d ",sz[i][j]);
				}else{
					printf("%d\n",sz[i][4]);
				}
			}
		}
	}
	return 0;
}
int judge(int x,int y){
	if(x>=0&&x<=4&&y>=0&&y<=4){
		return 1;
	}else{
		return 0;
	}

}