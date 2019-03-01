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
int n,i,j,k;
int sz[300];
j=0;
n=0;
char zfc[1001];
gets(zfc);
for(i=0;zfc[i]!='\0';i++){
    if(zfc[i]!=' '){
    	n++;
	}
    else{
        if(n!=0){
		sz[j]=n;
	    j++;
        }
		n=0;
	}
	}
sz[j]=n;
for(i=0;i<j;i++){
printf("%d,",sz[i]);
}
printf("%d",sz[j]);
return 0;
}


