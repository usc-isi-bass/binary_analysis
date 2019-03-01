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
	int i,n,j;
	char yjh[1][LEN];
	gets(yjh[0]);
	n=strlen(yjh[0]);
	for(i=0;i<n;i++){
		if(yjh[0][i]==32 && yjh[0][i+1]==32){
			for(j=i;j<n;j++){
				yjh[0][j]=yjh[0][j+1];
				i--;
			}

	}
	}
	printf("%s\n",yjh[0]);
	return 0;
}