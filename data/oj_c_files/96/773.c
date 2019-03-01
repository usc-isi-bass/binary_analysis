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
{	char c[200];
	int zs[200],shang[200];
	int i,j,yu=0,flag=0;
	gets(c);
	for(i=strlen(c)-1;i>=0;i--){
		zs[i]=c[i]-'0';
	}
	for(i=0;i<strlen(c);i++){
		shang[i]=(yu*10+zs[i])/13;
		yu=(yu*10+zs[i])%13;
	}
	for(i=0;i<strlen(c);i++){
		if(flag){
			printf("%d",shang[i]);
		}
		if(1-flag){
			if(shang[i]!=0){
				printf("%d",shang[i]);
				flag=1;
			}
		}
	}
         if(flag==0){
		printf("0");
	}
	printf("\n");
	printf("%d",yu);
	return 0;
}