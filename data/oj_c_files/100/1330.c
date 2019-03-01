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
	char s[300],i;
	int k=0,j,num;
	scanf("%s",s);
	for(i='a';i<='z';i++){
		num=0;
		for(j=0;s[j]!='\0';j++){
			if(s[j]==i){
				num++;}
		}
		if(num!=0){
			printf("%c=%d\n",i,num);
			k++;
		}
	}
	if(k==0) printf("No");
}
