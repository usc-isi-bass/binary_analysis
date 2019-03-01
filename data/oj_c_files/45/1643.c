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
	char e[256],all[256],sub[256],rep[256];
	int la,ls,lr,i,j,n=100;
	scanf("%s",sub);
	scanf("%s",all);
	la=strlen(all);
	ls=strlen(sub);
	lr=strlen(rep);
	for(i=0;i<la-ls+1;i++){
		strcpy(e,all);
		for(j=0;j<ls;j++)
			e[i+j]=sub[j];
		if(strcmp(e,all)==0){
			n=i;
			break;
		}
	}
	printf("%d",n);

	return 0;
}