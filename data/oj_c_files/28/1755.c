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
	char a[30000],b[300][100];
	int lenth,i,n=0,k=0;
	int shuzu[300];
	gets(a);
	lenth=strlen(a);
	for(i=0;i<lenth;i++){
		if(a[i]!=' '){
			b[n][k]=a[i];
			k++;
		}
		if(a[i]==' '&&a[i+1]!=' '){
			n++;
			k=0;
		}
	}
	n++;
	for(i=0;i<n;i++){
		shuzu[i]=strlen(b[i]);
	}
	printf("%d",shuzu[0]);
	for(i=1;i<n;i++){
		printf(",%d",shuzu[i]);
	}
	return 0;
}
