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
	char str[300];
	gets(str);
	int tag=0,sz[126]={0};
	int i;
	for(i=0;str[i]!='\0';i++){
		if(((str[i]>='A')&&(str[i]<='Z'))||((str[i]>='a')&&(str[i]<='z'))){
			sz[str[i]]++;
			tag=1;
		}
	}
	for(i='A';i<='Z';i++){
		if(sz[i]!=0){
			printf("%c=%d\n",i,sz[i]);
		}
	}
	for(i='a';i<='z';i++){
		if(sz[i]!=0){
			printf("%c=%d\n",i,sz[i]);
		}
	}
	if(tag==0){
		printf("No");
	}
	return 0;
}