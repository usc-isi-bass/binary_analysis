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
	char z[101];
	gets(z);
	int len,a;
	a=len=strlen(z);
    for (int i=1;i<a;){
		if(z[i]==' '&&z[i-1]==' '){
			for(int y=i;y<len-1;y++){
			  z[y]=z[y+1];
			}
			len--;
		}else {i++;}
	}
	z[len]='\0';
	printf("%s",z);
	return 0;
}    