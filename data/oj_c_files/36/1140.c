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

void paixu(char*x){
	int i,k;
	char temp;
	for(k=1;k<strlen(x);k++){
		for(i=0;i<strlen(x)-k;i++){
			if(x[i]>x[i+1]){
				temp=x[i+1];
				x[i+1]=x[i];
				x[i]=temp;
			}
		}
	}
}
int main()
{
    char a[100], b[100], c[50];
    scanf("%s %s",a,b);
    if(strlen(a)==strlen(b)){
		paixu(a);
		paixu(b);
		if(strcmp(a,b)==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}else{
		printf("NO\n");
	}
	return 0;
} 