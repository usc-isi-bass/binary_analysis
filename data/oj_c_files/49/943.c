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
	int len,len2,start,end,judge,i,p;
	char input[500],sample[500];
	gets(input);
	len=strlen(input);
	for(len2=2;len2<=len;len2++){
		for(start=0;start<=len-len2;start++){
			judge=1;
			end=start+len2-1;
			for(i=start;i<=end;i++){if(input[i]!=input[end+start-i]){judge=0;}}
			if(judge==1){
				for(i=start;i<=end;i++){printf("%c",input[i]);}
				printf("\n");			
			}}}
return 0;
}