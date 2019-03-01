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
	char sz[MAX+1];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",sz);
		for(j=0;sz[j];j++){
			if(!((sz[j]=='_')||(sz[j]>='a'&&sz[j]<='z')||(sz[j]>='A'&&sz[j]<='Z')||(sz[j]>='0'&&sz[j]<='9'&&j!=0))){
				break;
			}
		}    if(i==0){
		if(sz[j]){
			printf("no");
		}else{
			printf("yes");
		}
	}
    else{
    if(sz[j]){
    		printf("\nno");
		}else{
			printf("\nyes");
		}
	}}
	return 0;
}


