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


void main()
{
	int n,i,len[MAX1],line=0;
	char word[MAX1][MAX2];

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",word[i]);
		len[i]=strlen(word[i]);
	}

	for(i=0;i<n;i++){
		printf("%s",word[i]);
		line+=len[i];
		if( line+1+len[i+1]>80 ){
			putchar('\n');
			line=0;
		}
		else if(i<n-1){
			putchar(' ');
			line++;
		}
	}
}