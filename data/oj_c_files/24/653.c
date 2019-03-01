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
	char a[50][20];
	char b,c[50],d[50];
	int i,j;
	for(i=0;;i++){
		scanf("%s",a[i]);
		scanf("%c",&b);
		if(b=='\n'){
			j=i;
			break;}}
	strcpy(c,a[0]);
	strcpy(d,a[0]);

	for(i=0;i<=j;i++){
		if(strlen(a[i])>strlen(c))
			strcpy(c,a[i]);
		if(strlen(a[i])<strlen(d))
	         strcpy(d,a[i]);
	}
	printf("%s\n%s\n",c,d);
	return 0;
} 