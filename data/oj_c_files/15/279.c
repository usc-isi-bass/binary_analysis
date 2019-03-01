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

int main()
{
int i,j,n,k,a=0,b=0,c=0,d=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
for(j=1;j<=n;j++) {
scanf("%d",&k);
if(!a&&!k) {a=i;b=j;}
if(!k) {c=i;d=j;}
}
printf("%d",(c-a-1)*(d-b-1));
}