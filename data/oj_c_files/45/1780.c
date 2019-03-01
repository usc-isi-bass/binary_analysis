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

	int a,i,j,len[2],judge=1,k,m=0;
	char word[2][50];
	scanf("%s %s",word[0],word[1]);
	len[0]=strlen(word[0]);
	len[1]=strlen(word[1]);
	for(i=0;i<(len[1]-len[0]+1);i++){
		judge=1;
		k=i;
		for(j=0,m=0;j<len[0];j++,k++){
			if(word[0][j]==word[1][k]){
				m=1;
			}else{m=0;}
			judge=judge&&m;
		}
		if(judge){
			printf("%d",i);
			break;
		}
	}
	return 0;

}
