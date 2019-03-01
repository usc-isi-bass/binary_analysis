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
    char a[101],b[101];
    int i,n,k,j;
    gets(a);
    n=strlen(a);
    for(i=0,k=0;i<=n;i++){
        if(a[i]==' '&&a[i+1]==' '){
            continue;
    	}
        b[k]=a[i];
	    k=k+1;
    }
	puts(b);
    return 0;
}