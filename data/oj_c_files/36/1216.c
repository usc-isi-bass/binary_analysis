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
	char mid,a[100],b[100];
	int i,j,stop,length,dif;
	scanf("%s%s",a,b);
	length=strlen(a);
	for(i=1;i<=length;i++){
		for(j=0;j<length-i;j++){
			if(a[j+1]<a[j]){
				mid=a[j];
				a[j]=a[j+1];
				a[j+1]=mid;
			}
			if(b[j+1]<b[j]){
				mid=b[j];
				b[j]=b[j+1];
				b[j+1]=mid;
			}
		}
	}
	dif=strcmp(a,b);
	if(dif==0){
		printf("YES");
	}else{
		printf("NO");
	}
//	printf("%s\n%s",a,b);
	scanf("%d",&stop);
	return 0;
}