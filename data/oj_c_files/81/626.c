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

int p(int a){
	if(a>=0&&a<=4){
		return 1;
	}else{
		return 0;
	}
}

int main(){
    int s[5][5];
	int m,n,e;
	for(int i=0;i<=4;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&s[i][j]);
		}
	}
	scanf("%d%d",&m,&n);
	if(p(m)&&p(n)){
		for(int t=0;t<5;t++){
			e=s[m][t];
			s[m][t]=s[n][t];
			s[n][t]=e;
		}
		for(int a=0;a<5;a++){
			for(int b=0;b<4;b++){
				printf("%d ",s[a][b]);
			}
			printf("%d\n",s[a][4]);
		}
	}else{
		printf("error");
	}
    return 0;
	}