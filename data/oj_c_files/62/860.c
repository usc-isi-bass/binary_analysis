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
	char a[101],m;
	int b,i,j,k;
	gets(a);
	b=strlen(a);
	for(k=0;k<b;k++){
		for(i=1;a[i];i++){
			if(a[i]==32&&a[i-1]==32){
				for(j=i;j<b-1;j++){
					m=a[j];
					a[j]=a[j+1];
					a[j+1]=m;
				}
			}
		}
	}
	for(i=0;i<b;i++){
		if(a[i]==32&&a[i+1]==32){
			a[i]='\0';
			break;
		}
	}
	printf("%s",a);
	return 0;
}
