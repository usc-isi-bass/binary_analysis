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
	char newWord[50];
	char ch;
	char shortest[50];
	char longest[50];
	int slen=1000,llen=0,i,index=0,len,charlen;
	while(1){
		scanf("%s%c",newWord,&ch);
		len=strlen(newWord);
		if(len>llen)
			{
				strcpy(longest,newWord);
				llen = len;
			}
			if(len<slen && len>0)
			{
				strcpy(shortest,newWord);
				slen=len;
			}
		if(ch=='\n')
			break;
	}
	printf("%s\n",longest);
	printf("%s\n",shortest);
	return 0;
}