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


int main (){
	int n,i,j;
	char zf[1000][300];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",zf[i]);
		for(j=0;zf[i][j]!='\0';j++){
			if(zf[i][j]=='A'){
			   zf[i][j]='T';
			}
			else if(zf[i][j]=='T'){
			   zf[i][j]='A';
			}
			else if(zf[i][j]=='G'){
			   zf[i][j]='C';
			}
			else if(zf[i][j]=='C'){
			   zf[i][j]='G';
			}
		}
	
	}
	  
	for(i=0;i<n;i++){
		if(i!=n-1){
			printf("%s\n",zf[i]);
		}
		else{
		printf("%s",zf[i]);
		}
	}
	
	
	return 0;
}