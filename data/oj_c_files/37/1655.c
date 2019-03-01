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
	char zfc[100001];
	int t,i,k,x;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%s",zfc);
		for(k=0;k<strlen(zfc)-1;k++){
			for(x=0;x<strlen(zfc);x++){
				if(x!=k&&zfc[x]==zfc[k]){
					break;
				}
			}
			if(x==strlen(zfc)){
				printf("%c\n",zfc[k]);
				break;
			}
		}
		if(k==strlen(zfc)-1){
			for(x=0;x<strlen(zfc);x++){
				if(x!=k&&zfc[x]==zfc[k]){
					break;
				}
			}
			if(x==strlen(zfc)){
				printf("%c\n",zfc[k]);
				break;
			}else{
				printf("no\n");
			}
		}
	}
	return 0;
}