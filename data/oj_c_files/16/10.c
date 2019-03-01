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


void reverse(char s[],int a,int b){
	int i,j;
	char temp;
	for(i=a,j=b-1;i<j;i++,j--){
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	for(i=a;i<b;i++){
		printf("%c",s[i]);
	}
	printf("\n");
}

void main(){
	char string[10];
	int len;
	gets(string);
	len=strlen(string);
	reverse(string,0,len);
}
