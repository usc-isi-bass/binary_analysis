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
    int i,j;
	char a[1000];
	int b[300];
	gets(a);
	for(i=0;i<300;i++){
		b[i]=0;
	}
		j=0;
	    for(i=0;i<strlen(a);i++){
	    
			if(a[i]!=' '){
				b[j]++;
			}else{
                if(a[i+1]!=' ')
				{j++;}
			}
		}
	for(i=0;i<j+1;i++){
		if(i==j){
			printf("%d\n",b[i]);
		}else{
			printf("%d,",b[i]);
		}
	}
	
	return 0;
}

