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
	int i,k,n;
	int shu[100]={0};
	char zi[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",zi[i]);
		shu[i]=strlen(zi[i]);
	}
	for(i=0;i<n;i++){
		if((zi[i][shu[i-1]=='r'])&&(zi[i][shu[i]-2]=='e')){
			shu[i]=shu[i]-2;
		}
		else if((zi[i][shu[i-1]=='y'])&&(zi[i][shu[i]-2]=='l')){
			shu[i]=shu[i]-2;
		}
		else if((zi[i][shu[i]-1]=='g')&&(zi[i][shu[i]-2]=='n')&&(zi[i][shu[i]-3]=='i')){
			shu[i]=shu[i]-3;
		}
	}
	for(i=0;i<n;i++){
		for(k=0;k<shu[i];k++){
			printf("%c",zi[i][k]);
		}
		printf("\n");
	}
	return 0;
}