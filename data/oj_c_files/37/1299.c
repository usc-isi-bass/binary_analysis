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
	int n,i,j,k,m,b[100000],x;
	char a[100000],c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i==0){
		scanf("%c",&c);
		}
		gets(a);
        m=strlen(a);
        for(j=0;j<100000;j++){
		    b[j]=0;
		}
		for(j=0;j<m;j++){
			for(k=0;k<m;k++){
                if(a[j]==a[k]){
                   b[j]++;
				}
			}
		}
		x=0;
		for(j=0;j<m;j++){
			if(b[j]==1){
				printf("%c\n",a[j]);
                x=1;
				break;
			}
		}
		if(x==0){
			printf("no\n");
		}
	}
	return 0;
}
