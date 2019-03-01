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
	int n,i,j,judge=0;
	char zfc[21];
	scanf("%d",&n);

	for(i=0;i<n;i++){
		if(i==0){
			getchar();
		}
		gets(zfc);
		for(j=1;j<strlen(zfc);j++){
			if((zfc[0]>='a'&&zfc[0]<='z')||(zfc[0]>='A'&&zfc[0]<='Z')||zfc[0]=='_'){
				judge=1;
				if((zfc[j]>='a'&&zfc[j]<='z')||(zfc[j]>='A'&&zfc[j]<='Z')||zfc[j]=='_'||(zfc[j]>='0'&&zfc[j]<='9')){
					judge=1;
				}else{
					judge=0;
					break;
				}
			}else{
				judge=0;
				break;	
			}
		}

		if(judge==0){
			printf("no\n");
		}else{
			printf("yes\n");
		}
	}
	return 0;
}