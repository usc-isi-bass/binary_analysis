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

int main () {
int n,a,b,c,d,s;
b=0;
int sz[100];
scanf("%d",&n);
for(int i=0;i<n*n-1;i++){scanf("%d",&a);if(a==0){sz[b]=i;b++;}}
c=(sz[b-1]+1)%n-(sz[0]+1)%n+1;
d=(b+2)/2-c+1;
s=(c-2)*(d-2);
printf("%d",s);
return 0;
}
