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
	int n,m,i,j,k;
	int sz[100][100];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		   scanf("%d",&sz[i][j]);                                               
		}	
	}
	
	for(j=0;j<n;j++){
			k=j;
			for(i=0;i<=k&&i<m;i++,j--){
			printf("%d\n",sz[i][j]);
			
			}
	j=k;
		
	}

	  for(i=1;i<m;i++){
		 k=i;
		 for(j=n-1;j>=0&&i<m;i++,j--){
			printf("%d\n",sz[i][j]);
			
		}
		i=k;
	  }

	
    
	return 0;
}
