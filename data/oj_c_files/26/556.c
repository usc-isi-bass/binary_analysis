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


void main(){
	char str[1000];
	int i,len,judge;
	gets(str);
	len=strlen(str);
	judge=0;
	for(i=0;i<len;i++){
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
			printf("%c",str[i]);
			judge=0;
		}else if(str[i]=='.'){
			printf("%c",str[i]);
			judge=1;
		}else if(str[i]==' '&&judge==0){
			printf("%c",str[i]);
			judge=1;
		}else if(str[i]==' '&&judge==1){
			continue;
		}
	}
	printf("\n");
}