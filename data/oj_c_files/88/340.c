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

int number(char a);
int main()
{
	char c[30];
	int i,len,n;
	gets(c);
	len=strlen(c);
	n=0;
	while(number(c[n])==0){
	n++;
	}
	if(n==len-1)
		printf("%c",c[len-1]);
	if(n==len-2&&number(c[len-1])==1)
		printf("%c%c",c[len-2],c[len-1]);
	if(n==len-2&&number(c[len-1])==0)
		printf("%c",c[len-2]);
	if(n<len-2){
	printf("%c",c[n]);
	for(i=n+1;i<len;i++){
	if(number(c[i-1])==1&&number(c[i])==1)
		printf("%c",c[i]);
	if(number(c[i-1])==0&&number(c[i])==1)
		printf("\n%c",c[i]);
	}
	}
	return 0;
}
int number(char a){
	int m;
	if(a>='0'&&a<='9'){
	m=1;
	}else{
	m=0;
	}
	return m;
}