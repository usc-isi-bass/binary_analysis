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
	char zxc[30];
	int n,i,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%s",zxc);
		for(k=0;zxc[k]!='\0';k++){
			if(zxc[0]-'0'<=9&&zxc[0]-'0'>=0){
				printf("no\n");
				break;
			}else if((zxc[k]-'A'<=25&&zxc[k]-'A'>=0)||(zxc[k]-'a'<=25&&zxc[k]-'a'>=0)||(zxc[k]-'0'<=9&&zxc[k]-'0'>=0)||(zxc[k]=='_')){
				
			
		
			}else{
				printf("no\n");
				break;
			
			}
			if(zxc[k+1]=='\0'){
			printf("yes\n");
			}
	}

	}
	
	return 0;
}