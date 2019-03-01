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
	scanf("%d",&n);
	char a[270]={0},b[270]={0};
	
	for(i=0;i<n;i++){
		for(k=0;k<270;k++){
			b[k]='\0';
		}
		scanf("%s",a);
		for(k=0;k<strlen(a);k++){
			if(a[k]=='A'){
				b[k]='T';
			}
			if(a[k]=='T'){
				b[k]='A';
			}
			if(a[k]=='G'){
				b[k]='C';
			}
			if(a[k]=='C'){
				b[k]='G';
			}
		}
		printf("%s\n",b);
	}
	return 0;
}