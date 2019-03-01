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
char a[101];
int i,n,b,j;
gets(a);
n=strlen(a);
for(i=0;i<n;i++){
if(a[i]==' '){
if(a[i+1]==' '){
continue;}else{printf("%c",a[i]);}
}else{printf("%c",a[i]);}}
return 0;
}
