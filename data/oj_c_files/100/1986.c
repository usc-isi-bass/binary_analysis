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
	char str[300],e;
	int i,n,zc,x=1;
	scanf("%s",str);
	n=strlen(str);
	for(e='A';e<='Z';e++){
		zc=0;
		for(i=0;i<n;i++){
			if(str[i]==e){
				zc++;
			    x=0;}
		}
		if(zc!=0){
			printf("%c=%d\n",e,zc);}
	}
	for(e='a';e<='z';e++){
		zc=0;
		for(i=0;i<n;i++){
			if(str[i]==e){
				zc++;
			    x=0;}
		}
		if(zc!=0){
			printf("%c=%d\n",e,zc);}
	}
	if(x){
		printf("No");}
	return 0;
}