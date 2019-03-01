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
	int m,n;
	int s[5][5],tem;
	for(int i=0;i<5;i++){
		for(int w=0;w<5;w++){
		   scanf("%d",&s[w][i]);
		}
	}
	scanf("%d %d",&n,&m);
	if(n<5&&m<5){
		for(int p=0;p<5;p++){
		  tem= s[p][n];
		  s[p][n]=s[p][m];
          s[p][m]=tem;
		}
	for(int q=0;q<5;q++){
		for(int x=0;x<5;x++){
			if(x==4){
			   printf("%d",s[x][q]);
			}
			else{   printf("%d ",s[x][q]);}
		}
	    printf("\n");
		}
	}
	else{
	   printf("error");
	}
	return 0;
}