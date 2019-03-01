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
char a[256];
int n,i,j;
gets(a);
n=atoi(a);
for(i=0;i<n;i++){
gets(a);
for(j=0;a[j]!='\0';j++){
if(a[j]=='A'){
a[j]='T';
}else if(a[j]=='C'){
a[j]='G';}
else if(a[j]=='G'){
a[j]='C';}
else if(a[j]=='T'){
a[j]='A';}}
puts(a);}
return 0;
}
