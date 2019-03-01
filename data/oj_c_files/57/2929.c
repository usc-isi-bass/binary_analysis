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
	int n,i,j,k,l;
	char z[50][max];
	char a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",z[i]);
	}
	for(i=0;i<n;i++){
		l=strlen(z[i]);
		for(k=0,j=l-1;k<=j;k++,j--){
			a=z[i][k];
			z[i][k]=z[i][j];
			z[i][j]=a;
		}
	}
	for(i=0;i<n;i++){
		if(z[i][0]=='r'){
			z[i][1]='_';
		}else{
			if(z[i][0]=='y'){
				z[i][1]='_';
			}else{
				z[i][2]='_';
			}
		}
	}
	for(i=0;i<n;i++){
		l=strlen(z[i]);
		for(k=0,j=l-1;k<=j;k++,j--){
			a=z[i][k];
			z[i][k]=z[i][j];
			z[i][j]=a;
		}
	}
	for(i=0;i<n;i++){
		l=strlen(z[i]);
		for(j=0;j<l;j++){
			if(z[i][j]=='_'){
				z[i][j]='\0';
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",z[i]);
	}
	return 0;
}

