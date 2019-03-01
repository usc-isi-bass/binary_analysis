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
	int n,i,j,l,num;
	char zf[1000];
	scanf("%d",&n);
	for(l=1;l<=n;l++){
		scanf("%s",&zf);
	    for(j=0;zf[j]!='\0';j++){
			num=0;
			for(i=0;zf[i]!='\0';i++){
				if(zf[i]==zf[j]){
					num++;
				}
			}
			if(num==1){
				printf("%c\n",zf[j]);
				break;
			}
		}
		if(zf[j]=='\0'){
			printf("no\n");
		}
	}
	return 0;
}