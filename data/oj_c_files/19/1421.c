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
	char sen[101],word1[101],word2[101],danci[50][101];
	int LEN[50],LEN1,i,k=0,j=0;
	gets(sen);
	gets(word1);
	gets(word2);
	LEN1=strlen(sen);
	for(i=0;i<LEN1;i++){
		if(sen[i]!=' '){
			danci[j][k]=sen[i];
			k++;
		}else{
			danci[j][k]='\0';
			j++;
			k=0;
		}
	}
	danci[j][k]='\0';
	for(i=0;i<j;i++){
		LEN[i]=strlen(danci[i]);
	}
	for(i=0;i<=j;i++){
		if(strcmp(danci[i],word1)==0){
			strcpy(danci[i],word2);
		}
	}
	for(i=0;i<j;i++){
		printf("%s ",danci[i]);
	}
	printf("%s\n",danci[j]);
	return 0;
}