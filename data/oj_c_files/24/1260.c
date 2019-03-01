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
	int i,j,k,a;
	k=1;
	char X[50][100];
	for(i=0;i<50;i++){
		scanf("%s",X[i]);
	a=getchar();
	if(a=='\n'){
		break;
	}if(a==' '){
		k++;
	}
	}
	
    int Y[50];
	for (i=0;i<k;i++){
		Y[i]=strlen(X[i]);
	}int e;
	char ee[50];
	
for(i=0;i<k;i++){
		for(j=0;j<k-1-i;j++){
            if(Y[j]<Y[j+1]){
				e=Y[j];
				strcpy(ee,X[j]);
				Y[j]=Y[j+1];
				strcpy(X[j],X[j+1]);
				Y[j+1]=e;
				strcpy(X[j+1],ee);
			}
		}
}printf("%s\n",X[0]);for(i=0;i<k;i++){
		for(j=0;j<k-1-i;j++){
            if(Y[j]>Y[j+1]){
				e=Y[j];
				strcpy(ee,X[j]);
				Y[j]=Y[j+1];
				strcpy(X[j],X[j+1]);
				Y[j+1]=e;
				strcpy(X[j+1],ee);
			}
		}
	}
	printf("%s\n",X[0]);
	return 0;
}