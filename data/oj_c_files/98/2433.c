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
	char word[42];
	int chars_left,word_length,i,j,word_num;

	scanf("%d",&word_num);
//???word????
	scanf("%s",&word);
	printf("%s",word);
	word_num--;
	word_length=strlen(word);
	chars_left=80-word_length;

//????word??
	while(word_num--){
		scanf("%s",&word);
		word_length=strlen(word);
		if(chars_left<word_length+1){
			printf("\n%s",word);
			chars_left=80-word_length;
		}
		/*else if(chars_left==word_length+1){
			printf(" %s\n",word);
			chars_left=80;
		}*/
		else{
			printf(" %s",word);
			chars_left-=word_length+1;
		}
	}
	return 1;
}

	