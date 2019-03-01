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
	int n,i,len;
	char a[1000][41];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	len=strlen(a[0]);
	printf("%s",a[0]);
	for(i=1;i<n;i++){
		len+=1+strlen(a[i]);
		if(len<=80){
			printf(" %s",a[i]);
		}
		if(len>80){
			printf("\n%s",a[i]);
			len=strlen(a[i]);
		}
	}
	return 0;
}