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
	char s[2][50];
	int i,j,len,k,sum=0;
	for(i=0;i<2;i++){
		scanf("%s",s[i]);
	}
	k=strlen(s[1]);
	len=strlen(s[0]);
	for(j=0;j<k;j++){
		if(s[1][j]==s[0][0]){
			for(i=1;i<len;i++){
				if(s[1][j+i]==s[0][i]){
					sum++;
				}
				if(sum==(len-1)){
					printf("%d",j);
				}
			}
		}
	}
	return 0;
}
