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
	int i,j,k,len[2];
	char word[2][50];
    for(i=0;i<2;i++){
		scanf("%s",word[i]);
		len[i]=strlen(word[i]);
	}
	int n=100;
	j=0;
	k=0;
    while(j<len[1]&&k<len[0]){
	    if(word[1][j]==word[0][k]){
			    n=j;
			    j++;
			    k++;
		}
		else{
			k=0;
			j++;
			n=100;
		}
	}
	if(n!=100)
		printf("%d\n",n-len[0]+1);
	return 0;
}
