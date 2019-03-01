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
	int n,i,a;
	char num[4];
	gets(num);
	n=atoi(num);
	for(i=0;i<n;i++){
		char word[33];
		gets(word);
		a=strlen(word);
		if(word[a-1]==103&&word[a-2]==110&&word[a-3]==105){
			word[a-3]='\0';
		}else if(word[a-1]==121&&word[a-2]==108){
			word[a-2]='\0';
		}else if(word[a-1]==114&&word[a-2]==101){
			word[a-2]='\0';
		}
		puts(word);
	}
	return 0;
}



