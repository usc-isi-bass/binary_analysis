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
char sz[101];
int a,b;
gets(sz);
for(a=0;sz[a]!='\0';a++){
while(1){
if((sz[a]==' ')&&(sz[a+1]==' ')){
for(b=a+1;sz[b]!='\0';b++){
sz[b]=sz[b+1];
}
}else{
break;
}
}
}
puts(sz);
return 0;
}