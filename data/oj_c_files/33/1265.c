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
	int n,b,i,j;
	scanf("%d",&n);
	char a[n][256];
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++){
		b=strlen(a[i]);
		for(j=0;j<b;j++){
			if(a[i][j]=='A')
				a[i][j]='T';
			else if(a[i][j]=='T')
				a[i][j]='A';
			else if(a[i][j]=='C')
				a[i][j]='G';
			else
				a[i][j]='C';
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}