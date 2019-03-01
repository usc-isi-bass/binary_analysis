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

void main(){
int i,n,m;
	scanf("%d %d",&n,&m);
int *p=(int*)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
scanf("%d",p+i);
for(i=n-m;i<2*n-m;i++){
	printf("%d",*(p+i%n));
if(i==2*n-m-1)
break;
else printf(" ");
}
free(p);
}