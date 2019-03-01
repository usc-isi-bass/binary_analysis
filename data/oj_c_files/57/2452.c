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
	int a,i,j,l,pd=1;
	char jj[51][33],jjsc[51][33];
	scanf("%d",&a);
for(i=0;i<a;i++){
		scanf("%s",jj[i]);
		l=strlen(jj[i]);
		if(jj[i][l-1]=='g'){
			for(j=0;j<l-3;j++){
				jjsc[i][j]=jj[i][j];
			}
			jjsc[i][l-3]='\0';
		}else if(jj[i][l-1]=='r'){
			for(j=0;j<l-2;j++){
				jjsc[i][j]=jj[i][j];
			}
			jjsc[i][l-2]='\0';
		}else if(jj[i][l-1]=='y'){
			for(j=0;j<l-2;j++){
				jjsc[i][j]=jj[i][j];
			}
			jjsc[i][l-2]='\0';
		}
}
for(i=0;i<a;i++){
	printf("%s\n",jjsc[i]);
}
	return 0;
}