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
	int n,i,tmp,j;
	char word[100];
    scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",word);
		tmp=strlen(word);
        if(word[tmp-2]=='e'||word[tmp-2]=='l'){
		for(j=0;j<tmp-3;j++){
			printf("%c",word[j]);
		}
		printf("%c\n",word[tmp-3]);
		}
		else{
			for(j=0;j<tmp-4;j++){
			printf("%c",word[j]);
		}
		printf("%c\n",word[tmp-4]);
		}
	}
    return 0;
}

