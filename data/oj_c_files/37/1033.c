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
int n,i,k,t;
int m,s;
char sz[5000];
scanf("%d",&n);
for(i=1;i<=n;i++){
	scanf("%s",&sz);
	s=0;
	for(k=0;sz[k]!='\0';k++){
		m=0;
		for(t=0;sz[t]!='\0';t++){
			if(sz[k]==sz[t]){
				m++;
			}
		}
		if(m==1){
			printf("%c\n",sz[k]);
			s++;
			break;
		}
	}
	if(s==0){
		printf("no\n");
	}
}
	return 0;
}
