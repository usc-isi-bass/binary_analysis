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
	int i,j,n,len,e=0;
	char word[NMAX][AMAX];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",word[i]);
	}
	i=0;
	while(i<n){
		len=strlen(word[i]);
		for(;len<=80&&i<n;i++){
			len+=strlen(word[i+1])+1;
		}
		printf("%s",word[e]);
		for(j=e+1;j<i;j++)
			printf(" %s",word[j]);
		e=i;
		printf("\n");

	}

}

