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

int hs(int n,int m);
int main()
{
	int sz[5][5];
	int s[5];
	int n,m,i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
	if(hs(n,m)){
		for(i=0;i<5;i++){
	        s[i]=sz[n][i];
			sz[n][i]=sz[m][i];
			sz[m][i]=s[i];
		}
	   for(i=0;i<5;i++){
		   for(j=0;j<4;j++){
			   printf("%d ",sz[i][j]);
		   }
                              printf("%d",sz[i][4]);
			   printf("\n");
	   }
	}else{
		printf("error");
	}
}
int hs(int n,int m){
	if(n>=0&&n<5&&m>0&&m<5){
		return 1;
	}else{
		return 0;
	}
}

