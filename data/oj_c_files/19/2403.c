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
    char Sen[200],word[200],exchange[200],temp[200];
	gets(Sen);
	gets(word);
	gets(exchange);
	int n=strlen(Sen),i;
	int m;
	m=0;
	for(i=0;i<n;i++){
		if(Sen[i]!=' '){
			temp[m]=Sen[i];
			m++;
		}
		else{
			temp[m]='\0';
			if(strcmp(temp,word)==0)
				printf("%s ",exchange);
			else
				printf("%s ",temp);
			m=0;
		}
		if(i==n-1){
			temp[m]='\0';
			if(strcmp(temp,word)==0)
				printf("%s\n",exchange);
			else
				printf("%s\n",temp);
			m=0;
		}

	}
}   
