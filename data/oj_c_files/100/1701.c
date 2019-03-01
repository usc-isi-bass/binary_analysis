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
	char str[300],j;
	scanf("%s",str);
	int n=strlen(str);
	int i,k,l=0;
	for(j='A';j<='Z';j++){
		k=0;
		for(i=0;i<n;i++){
			if(str[i]==j){
				k++;
			}
		}
		if(k>0){
			printf("%c=%d\n",j,k);
		}
	}
	for(j='a';j<='z';j++){
		k=0;
		for(i=0;i<n;i++){
			if(str[i]==j){
				k++;
			}
		}
		if(k>0){
			printf("%c=%d\n",j,k);
		}
	}
	for(i=0;i<n;i++){
		if(str[i]<'A'||str[i]>'z')
			l++;
	}
	if(l==n)
		printf("No\n");
	return 0;
}