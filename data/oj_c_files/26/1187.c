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
char a[1000];
int i,k,j=0,n,m=0;
gets(a);
while(1){
for(i=0;a[i]!='\0';i++){
if(a[i]==' '&&a[i+1]==' '){
for(k=i;a[k]!='\0';k++){
a[k]=a[k+1];
}
}
}
j=0;
for(m=0;a[m]!='\0';m++){
if(a[m]==' '){
if(a[m+1]==' '){
    j++;
}
}
}
if(j==0){
    break;
}
}
puts(a);
return 0;
}

