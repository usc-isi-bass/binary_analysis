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
	int n;
	scanf("%d",&n);
	char a[1000][40];
	int i;
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	int b[1000];
	for(i=0;i<n;i++){
		b[i]=strlen(a[i]);
	}
	printf("%s",a[0]);
	int count=strlen(a[0]);
	for(i=1;i<n;i++){
		if(count+1+strlen(a[i])<=80){
			printf(" %s",a[i]);
			count=count+1+strlen(a[i]);
		}else{
			printf("\n%s",a[i]);
			count=strlen(a[i]);
		}
	}
	return 0;
}
