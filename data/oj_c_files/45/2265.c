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
	char a[50],b[50],c[50];
	int n,m,i,j,k=0;
          scanf("%s%s",a,b);
	n=strlen(a);
	m=strlen(b);
	for(i=0;i<m;i++){
		if(b[i]==a[0]){
			for(j=i;j<i+n;j++){
				c[k]=b[j];
				k++;
			}
			c[k]='\0';
			if(strcmp(c,a)==0){
				printf("%d",i);
			}
		}
	}
	return 0;
}