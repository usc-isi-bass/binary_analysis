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

int main()
{
	char str[256];
	char substr[256];
	char rep[256];
	int i,j,flag;
	int a,b,c;
	
	
	gets(str);
	gets(substr);
	gets(rep);

	a=strlen(substr);
	b=strlen(str);
	c=strlen(rep);

	for(i=0;i<b;i++){
		flag=1;
		for(j=0;j<a;j++){
			if(str[i+j]!=substr[j]){
				flag=0;
			}
		}
		if(flag==1){
			break;
		}
	}

	if(i==b){
		puts(str);}
	else{
	

		for(j=0;j<i;j++){
			printf("%c",str[j]);
		}
		for(j=0;j<c;j++){
			printf("%c",rep[j]);
		}
		for(j=i+a;j<b;j++){
			printf("%c",str[j]);
		}
	
	}
    return 0;
}