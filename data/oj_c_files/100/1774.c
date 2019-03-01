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
	char str[N],j;
	gets(str);
	int len,i,x=1;
	len=strlen(str);
	for(j='A';j<='Z';j++){
        int sum=0;
    for(i=0;i<len;i++){
		if(str[i]==j){
			sum++;
			x=0;
		}
	}
		if(sum!=0){
			printf("%c=%d\n",j,sum);
	}
	}
	for(j='a';j<='z';j++){
        int sum=0;
    for(i=0;i<len;i++){
		if(str[i]==j){
			sum++;
			x=0;
		}
	}
		if(sum!=0){
			printf("%c=%d\n",j,sum);
		}
	}
	 if(x){
		 printf("No");
	 }
	 return 0;
}