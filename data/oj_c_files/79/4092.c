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

int main() {
	int i,j,k,m,n;
    for(j=1;j<101;j++){
        scanf(" %d %d", &n, &m);
        k=0;
        for(i=2;i<=n;i++){
            k=((m%i)+k)%i; 
        }
        k++;
        if(n!=0){printf("%d\n", k);}
    }
    return 0;
}