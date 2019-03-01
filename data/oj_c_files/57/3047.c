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
	int n,i,l;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		char word[max+1];
		scanf("%s",word);
		l=strlen(word);
		if(strcmp(&word[l-1],"r")==0){
			word[l-2]=word[l-2]-'e'+'\0';
		}
		else if(strcmp(&word[l-1],"y")==0){
			word[l-2]=word[l-2]-'l'+'\0';
		}
		else if(strcmp(&word[l-1],"g")==0){
			word[l-3]=word[l-3]-'i'+'\0';
		}
		printf("%s\n",word);
	}
	return 0;
}
