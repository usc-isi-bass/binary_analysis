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
	int n,k,i,j;
	scanf("%d",&n);
	char zfc[100][21];
	for(i=0;i<n;i++){
		scanf("%s",zfc[i]);
	}
	for(i=0;i<n;i++){
		
		k=strlen(zfc[i]);
		for(j=0;j<k;j++){
			if(zfc[i][0]>='0'&&zfc[i][0]<='9'){
				printf("no\n");
				break;
				
			
			}
			 if(zfc[i][j]>='a'&&zfc[i][j]<='z'||zfc[i][j]>='A'&&zfc[i][j]<='Z'||zfc[i][j]=='_'||zfc[i][j]>='0'&&zfc[i][j]<='9'){
				continue;

			}else{
				printf("no\n");
				break;
			}
			
			
			}
	
	if(j==k){
		printf("yes\n");
	}
	}
	return 0;
}

