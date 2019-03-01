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
    int n,i,j;
	char q[256];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&q);
		for(j=0;q[j]!='\0';j++){
     		if(q[j]=='A'){
                printf("T");
            }else{
				if(q[j]=='T'){
					printf("A");
				}else{
					if(q[j]=='C'){
						printf("G");
					}else{
						if(q[j]=='G'){
							printf("C");
						}
					}
				}
			}
		}
		printf("\n");
	}
    return 0;
}