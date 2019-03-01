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

void main() {
	char a[10000];
	int i,j,n,flag;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(a);
		if((((a[0]>64)&&(a[0]<91))||((a[0]>96)&&(a[0]<123))||(a[0]==95))==0){
			printf("no\n");
		}else{
			flag=0;
			for(j=1;j<strlen(a);j++){
				if((((a[j]>47)&&(a[j]<58))||((a[j]>64)&&(a[j]<91))||((a[j]>96)&&(a[j]<123))||(a[j]==95))==0){
					printf("no\n");
					flag=1;
					break;
				}
			}
			if(flag==0){
				printf("yes\n");
			}
		}
	}
}



