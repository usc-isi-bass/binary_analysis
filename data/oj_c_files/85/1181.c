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
	int n,i,j,a,m=0;
	char zfc[LEN][LEN];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&zfc[i]);
	}
	for(i=0;i<n;i++){
		a=strlen(zfc[i]);
		for(j=0;j<a;j++){
			if(j==0){
				if(zfc[i][j]<65||(zfc[i][j]>90&&zfc[i][j]<95)||zfc[i][j]==96||zfc[i][j]>122){
				break;
	
				}
			}else{
				if(zfc[i][j]<48||(zfc[i][j]>57&&zfc[i][j]<65)||(zfc[i][j]>90&&zfc[i][j]<95)||zfc[i][j]==96||zfc[i][j]>122){
				break;
	
				}else{
					m++;
		
				}
			}	

		}
		if(j==a){
			printf("yes\n");
		}else{
			printf("no\n");
		}

	}


	return 0;
}
