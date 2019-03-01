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

char str[1000];
void fanxu(char a[]){
	int len;
	len=strlen(a);
	int i;
	if (a[0]=='-'){

		for(i=1;i<=len/2;i++){
			int temp=str[i];
			str[i]=str[len-i];
			str[len-i]=temp;
		}
	}
	else{
		for(i=0;i<len/2;i++){
			int temp=str[i];
			str[i]=str[len-1-i];
			str[len-1-i]=temp;
		}
	}
}
void show(char a[]){
	if ((a[0]=='-')&&(a[1]=='0')&&(a[2]==0)){
		printf("%d\n",0);
		return;
	}
if ((a[0]=='0')&&(a[1]==0)){
		printf("%d\n",0);
		return;
	}
	int i,t=0;
	if (a[0]=='-') {printf("%c",a[0]);}
	else
	{
	t=1;
	}
	for(i=1-t;a[i]=='0';i++);
	for(;a[i]!='\0';i++){
		printf("%c",a[i]);
	}
	printf("\n");
}




int main(){
	int j;
	for(j=1;j<=6;j++){
		gets(str);
		fanxu(str);
		show(str);
	}
	
	return 0;
}

