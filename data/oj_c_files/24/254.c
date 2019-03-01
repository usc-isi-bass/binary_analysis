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
    char sen[300]={0}, word[50][50]={0}, ax[50], in[50];
	int i=0, j=0, e, lens, max=0, min=50;
	gets(sen);
	lens=strlen(sen);
	for(e=0;e<lens;e++){
		if(sen[e]==' '){
            i++;
		    j=0;
		}
		else if(sen[e]!=' '){
			word[i][j]=sen[e];
			j++;
		}
	}
    for(e=0;e<i+1;e++){
        if(strlen(word[e])>max){
			max=strlen(word[e]);
            strcpy(ax,word[e]);
		}
		if(strlen(word[e])<min){
			min=strlen(word[e]);
			strcpy(in,word[e]);
		}
	}
	printf("%s\n%s\n", ax, in);
	return 0;
}
