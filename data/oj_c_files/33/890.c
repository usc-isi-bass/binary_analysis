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
	char str[1000][256];
	int i,p=0,n,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str[i]);
		for(j=0;str[i][j]!='\0';j++){
			switch(str[i][j]){
			case('A'):str[i][j]='T';
			break;
			case('T'):str[i][j]='A';
			break;
			case('G'):str[i][j]='C';
			break;
			case('C'):str[i][j]='G';
			break;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",str[i]);
	}
	return 0;
}
