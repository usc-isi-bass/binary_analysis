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
	char DNA[chain][MAX];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",DNA[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;DNA[i][j];j++){
			if(DNA[i][j]=='A'){
				DNA[i][j]='T';
			}
			else if(DNA[i][j]=='T'){
                DNA[i][j]='A';  
			}
			else if(DNA[i][j]=='C'){
				DNA[i][j]='G';
			}else{
				DNA[i][j]='C';
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",DNA[i]);
	}
	return 0;
}