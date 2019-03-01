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
    int len,i,j;
    char sz[400];
    gets(sz);
	len=strlen(sz);
    for(i=0;i<len;i++){	
		if(sz[i]==' '){
			if(sz[i+1]==' '){
				for(j=i+1;j<len;j++){
				   sz[j-1]=sz[j];
				}
				sz[len-1]='\0';
				len--;
			}
			if(sz[i+1]==' '){
			   i--;
			}
		}
    }
	printf("%s",sz);
	
     
return 0;
}