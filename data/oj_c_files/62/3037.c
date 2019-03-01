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
	int i=0,num,j=1,m,n,k=1;
	char a[100];
	gets(a);
	num=strlen(a);
	for(i=0;i<100;i++){
		for(j=1;j<num;j++){
			if(a[j-1]!=' ' && a[j]==' ' && a[j+1]==' '){m=j;}
			if(a[j-1]==' ' && a[j]==' ' && a[j+1]!=' '){n=j;break;}
			if(a[j-1]!=' ' && a[j]==' ' && a[j+1]!=' '){n=num;}
		}for(k=1;k<=(num-n);k++){
			    a[m+k]=a[n+k];
				if(k==num-n)
				a[m+k]='\0';
		}
	}
	puts(a);
return 0;
}
