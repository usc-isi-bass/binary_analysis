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

char pd(char x);
int main(){
char a[256],b[256];
int i,j,l,n;
scanf("%d",&n);
for (i=1;i<=n;i++){
scanf("%s",a);
l=strlen(a);
for (j=0;j<l;j++)
b[j]=pd(a[j]);
b[l]=0;
printf("%s\n",b);
}
return 0;
}
char pd(char x){
char y;
if (x=='A') y= 'T';
if (x=='T') y= 'A';
if (x=='C') y= 'G';
if (x=='G') y= 'C';
return y;
}
