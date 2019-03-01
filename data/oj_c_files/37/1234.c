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

int main (){
	int n,i,j,k,b;
	scanf("%d",&n);
	char a[100000];
	
	for (i=0;i<n;i++){
		scanf("%s",&a);
		for(j=0;a[j]!='\0';j++){
			b=1;
			for(k=0;a[k]!='\0';k++){
				if(j==k){
					continue;
				}else{
				    if(a[j]-a[k]==0){
					    b=0;
					    break;
					}
				}
			}
			if(b==1){
			    printf("%c\n",a[j]);
			    break;
			}
		}
		if(b==0){
			printf("no\n");
		}
	}
	
	return 0;
}
