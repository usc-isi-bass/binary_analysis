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
	char a[3000][300],b[300];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(j=0;j<n;j++){
		for(i=0;a[j][i]!='\0';i++){
		if(a[j][i]=='A'){
			b[i]='T';
		}else if(a[j][i]=='T'){
			b[i]='A';
		}else if(a[j][i]=='G'){
			b[i]='C';
		}else{
			b[i]='G';
		}
		}
		b[i]='\0';
		printf("%s\n",b);
	}
	return 0;
}
