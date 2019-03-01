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
char a[100][100];
	char b[100],c[100],d;
	int i,n;
	for(i=0;;i++){
		scanf("%s",a[i]);
		scanf("%c",&d);
		if(d==10){
			break;
		}
	}
	scanf("%s",b);
	scanf("%s",c);
	for(n=0;n<i+1;n++){
		if(strcmp(a[n],b)==0){
		strcpy(a[n],c);	
			}
	}
	
	for(n=0;n<i;n++){
		printf("%s ",a[n]);
	}
	printf("%s",a[i]);
	return 0;
}
	