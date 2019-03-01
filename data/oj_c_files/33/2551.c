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
    char z[1000][1000],s[1000][1000];
	int n,i,k,a;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%s\n",z[i]);
	}
	for(i=0;i<=n-1;i++){
		for(k=0;z[i][k]!=0;k++){
            if(z[i][k]=='A'){
				s[i][k]='T';
			}
			if(z[i][k]=='T'){
				s[i][k]='A';
			}
			if(z[i][k]=='C'){
				s[i][k]='G';
			}
			if(z[i][k]=='G'){
				s[i][k]='C';
			}
		}
	}
		for(i=0;i<=n-1;i++){
		printf("%s\n",s[i]);
		}
	return 0;
}