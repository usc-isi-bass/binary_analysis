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
	char origin[101];
	gets(origin);
	char result[100];
	int i;
	int a;
	int b;
	a=strlen(origin);
	if(a<2){
		result[0]='0';
		result[1]='\0';
		b=(origin[0]-'0')%13;
		puts(result);
		printf("%d", b);
	}
	else if(((a==2)&&((origin[0]-'0')*10+(origin[1]-'0'))<13)){
        result[0]='0';
		result[1]='\0';
		b=((origin[0]-'0')*10+(origin[1]-'0'))%13;
		puts(result);
		printf("%d", b);

	}
	else{
	
	b=((origin[0]-'0')*10+(origin[1]-'0'))%13;
	int m;
	if((origin[0]-'0')*10+(origin[1]-'0')>=13){
	   m=((origin[0]-'0')*10+(origin[1]-'0'))/13;
	   result[0]=m+'0';
	   for(i=2;i<a;i++){
		m=(b*10+(origin[i]-'0'))/13;
		result[i-1]=m+'0';
		b=(b*10+(origin[i]-'0'))%13;
	   }
    result[i-1]='\0';
	puts(result);
	printf("%d", b);
	}
	else{
        for(i=2;i<a;i++){
		m=(b*10+(origin[i]-'0'))/13;
		result[i-2]=m+'0';
		b=(b*10+(origin[i]-'0'))%13;
		}
    result[i-2]='\0';
	puts(result);
	printf("%d", b);
	}
	}
	
	return 0;
}
