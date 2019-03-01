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
	int n,i,j,k,sum,len;
	scanf("%d",&n);
	char a[100];
	for(i=0;i<n;i++){
		scanf("%s",a);
		len=strlen(a);
		for(j=0;j<len;j++){
			sum=0;
			for(k=0;k<len;k++){
				if(a[j]==a[k]){
					sum++;
                                      }
                             }
			if(sum==1){
				printf("%c\n",a[j]);
				break;
                             }
                   }
                   if(sum!=1){
                                  printf("no\n"); 
                             } 
                    
          }
  return 0; 
} 