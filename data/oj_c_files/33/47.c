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
	char a[1000][300],b[1000][300];
	int i,j,n,t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++){
		t=strlen(a[i]);
		for(j=0;j<t;j++){
			if(a[i][j]=='A') b[i][j]='T';
			if(a[i][j]=='T') b[i][j]='A';
			if(a[i][j]=='C') b[i][j]='G';
			if(a[i][j]=='G') b[i][j]='C';
		}
		b[i][t]='\0';
	}
	for(i=0;i<n;i++){
		printf("%s\n",b[i]);
	}

	return 0;
}


