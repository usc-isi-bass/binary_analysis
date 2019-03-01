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
	char s[300], bian='A';
	int i, j, k, flag=0;
	scanf("%s", s);
	for(j=0;s[j]!='\0';j++){
		if((s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')){
			flag=1;
		}
	}
	if(flag==0){
		printf("No");
	}
	for(i=0;i<26;i++){
		k=0;
		for(j=0;s[j]!='\0';j++){
			if(s[j]==bian){
				k++;
			}
		}
		if(k!=0){
			printf("%c=%d\n", bian, k);
		}
		bian++;
	}
	bian='a';
	for(i=0;i<26;i++){
		k=0;
		for(j=0;s[j]!='\0';j++){
			if(s[j]==bian){
				k++;
			}
		}
		if(k!=0){
			printf("%c=%d\n", bian, k);
		}
		bian++;
	}
	return 0;
}