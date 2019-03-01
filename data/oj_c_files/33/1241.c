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
	int n;
	scanf("%d",&n);
	char mulian[257];
	char zilian[1000][257];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%s",mulian);
		for(j=0;mulian[j]!='\0';j++){
			if(mulian[j]=='A') zilian[i][j]='T';
			else if(mulian[j]=='T') zilian[i][j]='A';
			else if(mulian[j]=='G') zilian[i][j]='C';
			else zilian[i][j]='G';
		}
		zilian[i][j]='\0';
	}
	int k;
	for(k=0;k<n;k++){
		printf("%s\n",zilian[k]);
	}

	return 0;
}
