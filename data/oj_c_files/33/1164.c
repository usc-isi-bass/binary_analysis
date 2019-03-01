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
int n,i,k;
char jj[1000][260], pdj[1000][260];    
scanf("%d", &n);
for(i=0; i<n; i++){    
	scanf("%s", jj[i]);}
for(i=0; i<n; i++){
	int m=strlen(jj[i]);
	for(k=0;k<m;k++){
		if(jj[i][k]=='A'){pdj[i][k]='T';}
	else if(jj[i][k]=='T'){pdj[i][k]='A';}
		else if(jj[i][k]=='G'){pdj[i][k]='C';}
		else if(jj[i][k]=='C'){pdj[i][k]='G';}
	}
}
		for(i=0; i<n; i++){printf("%s\n",pdj[i]);}
return 0;
}
