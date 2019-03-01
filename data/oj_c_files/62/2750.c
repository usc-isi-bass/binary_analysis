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
	char a[10000];
	gets(a);
	int i,k;
	for(i=0;a[i]!='\0';i++){
		if(a[i]==' '){
			while(1){
				if(a[i+1]==' '){
					for(k=i;a[k]!='\0';k++){
						a[k]=a[k+1];
					}
				}else{
					break;
				}
			}
		}
	}
	printf("%s",a);
	return 0;
}