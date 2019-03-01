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
int n,l;
scanf("%d\n",&n);
char zfc[n][256],*p;
for(l=0;l<n;l++){
gets(zfc[l]);
}
for(l=0;l<n;l++){
for(p=zfc[l];*p!='\0';p++){
if(*p=='A'){
*p='T';
}
else if(*p=='T'){
*p='A';
}
else if(*p=='G'){
*p='C';
}
else {
*p='G';
}
}
puts(zfc[l]);
}
return 0;
}