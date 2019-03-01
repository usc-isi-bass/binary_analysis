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
	int sz[5][5];
	int j;
	int i,n,m,a;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
	      scanf("%d",&(sz[i][j]));
		}
	}
	scanf("%d %d",&n,&m);
	    if(n>=0&&n<5&&m>=0&&m<5){
		     for(i=0;i<5;i++){
			       a=sz[m][i];
			       sz[m][i]=sz[n][i];
			       sz[n][i]=a;
		      }
			   for(i=0;i<5;i++){
				   for(j=0;j<5;j++){
					    if(j>0){
						   printf(" ");
					   }
						if(j!=4){
		                   printf("%d",sz[i][j]);
						}else{
						   printf("%d\n",sz[i][j]);
					   }
					   
				   }
			   }
	       }else{
		       printf("error");
	       }

	return 0;
}