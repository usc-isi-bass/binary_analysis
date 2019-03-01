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
    int i,j,k=0,p;
char zf[101],jg[101];
gets(zf);
for(i=0;zf[i]!='\0';i++){
    if(zf[i]==' '){
    jg[k]=' ';
    k++;
    j=i+1;
    while(zf[j]==' '){j++;}
    i=j;}
    jg[k]=zf[i];
    k++;    
}jg[k]='\0';
printf("%s",jg);
return 0;}
