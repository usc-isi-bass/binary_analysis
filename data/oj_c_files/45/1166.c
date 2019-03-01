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
	char s[2][100];
	int i,l1,l2,j;
	for(i=0;i<2;i++){
		scanf("%s",s[i]);
	}
	l1=strlen(s[0]);
	l2=strlen(s[1]);
	for(i=0;i<l2;i++){
		for(j=0;j<l1;j++){
		if(s[1][i+j]!=s[0][j]){
			break;}
		}
		if(j==l1){
			printf("%d",i);
		break;}
	}

	
	return 0;
}