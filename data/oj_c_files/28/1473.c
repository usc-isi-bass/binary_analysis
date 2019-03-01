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
	char a[20000];
	gets(a);
	int len=0,n=0,i=0;
	while(a[i]!='\0'){
		if(a[i]!=32){
			len++;
		}
		else{
			if(a[i-1]!=32){
				printf("%d,",len);
				len=0;
			}
		}
		i++;
	}
	printf("%d",len);
	return 0;
}