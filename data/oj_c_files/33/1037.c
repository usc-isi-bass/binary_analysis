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
	int n,i,j,a;
	char num[4];
	gets(num);
	n=atoi(num);
	for(i=0;i<n;i++){
		char yl[256];
		char bl[256];
		gets(yl);
		a=strlen(yl);
		for(j=0;j<a;j++){
			if(yl[j]==65){
				bl[j]='T';
			}else if(yl[j]==67){
				bl[j]='G';
			}else if(yl[j]==71){
				bl[j]='C';
			}else{
				bl[j]='A';
			}
			printf("%c",bl[j]);
		}
		printf("\n");
	}
	return 0;
}






	
