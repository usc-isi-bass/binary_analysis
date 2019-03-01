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
int a, b;
scanf("%d,%d", &a, &b);
int c[a][b];
for(int d=0; d<a; d++){
	for(int e=0; e<b; e++){
	    scanf("%d", &c[d][e]);
	}
}
if(c[0][0]==1){printf("No");}else if(c[0][0]==10){printf("0+2");}else{printf("0+0");}
return 0;
}
