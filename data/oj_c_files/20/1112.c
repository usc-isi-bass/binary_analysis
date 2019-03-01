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

char str[10];
char substr[3];
int pan(){
	int j,i,x,qq=strlen(str)-1;
	for(i=0;i<strlen(str);i++){
		x=0;
		for(j=0;j<strlen(str);j++){
			if(str[i]<str[j]){x=0;break;}
			x=1;}
		if(x==1){qq=i;break;}
	}
	return qq;
	}
		 	
			


int main(){
	while (scanf("%s %s",str,substr)!=EOF){
		int i;
		for(i=0;i<=pan();i++)printf("%c",str[i]);
		for(i=0;i<3;i++)printf("%c",substr[i]);
		for(i=pan()+1;i<strlen(str);i++)printf("%c",str[i]);
		printf("\n");}
	return 0;
}		