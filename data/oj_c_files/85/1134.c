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

int judgechar(char x){
	if(x>47&&x<58){return 0;}
	if(x>64&&x<91){return 0;}
	if(x>96&&x<123){return 0;}
	if(x>96&&x<123){return 0;}
	if(x==95){return 0;}
	return 1;}
int judgebegin(char x){
	if(x>64&&x<91){return 0;}
	if(x>96&&x<123){return 0;}
	if(x>96&&x<123){return 0;}
	if(x==95){return 0;}
	return 1;}
int main (){
	int all,i,p,len,ok;
	char input[21];
	scanf("%d",&all);
	for(i=0;i<all;i++){
		scanf("%s",input);
		len=strlen(input);
		ok=1;
		if(judgebegin(input[0])){
			
			
			ok=0;}
		for(p=1;p<len;p++){if(judgechar(input[p])){ok=0;}}
		if(ok==0){printf("no\n");}
		if(ok==1){printf("yes\n");}
	}

return 0;}