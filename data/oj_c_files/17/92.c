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

// ??????.cpp : Defines the entry point for the console application.
//


int main(int argc, char* argv[])
{
	char zfc[120],cha,i,j,len;
	while(scanf("%s",zfc)!=EOF){
		cha=0;
		len=strlen(zfc);
		printf("%s\n",zfc);
		for(i=0;i<len;i++){
			if(zfc[i]!='('&&zfc[i]!=')'){
				zfc[i]=' ';
			}
			if(zfc[i]==')'){
				for(j=i-1;j>=0;j--){
					if(zfc[j]=='('){
						zfc[j]=' ';
						zfc[i]=' ';
						break;
					}
				}
				if(j<0){
					zfc[i]='?';
				}
			}
		}
		for(i=0;i<len;i++){
			if(zfc[i]=='('){
				zfc[i]='$';
			}
		}
		puts(zfc);
	} 
	return 0;
}

