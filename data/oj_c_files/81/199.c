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

int i,j,p,m,n;
int han(int m,int n,int sz[5][5]);
int han(int m,int n,int sz[5][5]){
	
	if(0<=m&&m<=4&&0<=n&&n<=4){
		for(i=0;i<5;i++){
			p=sz[n][i];
			sz[n][i]=sz[m][i];
			sz[m][i]=p;
		}
		return 1;
	}else{ return 0;}
}
int main(){
	int s[5][5],c;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&s[i][j]);
		}
	}scanf("%d%d",&m,&n);
  c=han(m,n,s);
	if(c==1){
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(j<4){
					printf("%d ",s[i][j]);
				}else{printf("%d\n",s[i][j]);
				}
			}
			
			
			}
	
		
	}else{
		printf("error");
	}
	return 0;
}
