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
	int n,i,j,b[50];
	char a[50][33];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
		b[i]=strlen(a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i][b[i]-2]=='e'||a[i][b[i]-2]=='l')
			a[i][b[i]-2]='\0';
		else
			a[i][b[i]-3]='\0';
	}
	for(i=0;i<n;i++)
		printf("%s\n",a[i]);
	return 0;
}
