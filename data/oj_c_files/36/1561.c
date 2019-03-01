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
	char a[100],b[100],mid;
	int i,j,l1,l2,judge;
	scanf("%s %s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2){
		printf("NO");
	}else{
		for(i=1;i<=l1;i++){
			for(j=0;j<l1-i;j++){
				if(a[j]<a[j+1]){
					mid=a[j];
					a[j]=a[j+1];
					a[j+1]=mid;
				}
			}
		}
		for(i=1;i<=l1;i++){
			for(j=0;j<l1-i;j++){
				if(b[j]<b[j+1]){
					mid=b[j];
					b[j]=b[j+1];
					b[j+1]=mid;
				}
			}
		}
		judge=strcmp(a,b);
		if(judge==0){
			printf("YES");
		}else{
			printf("NO");
		}
	}
}