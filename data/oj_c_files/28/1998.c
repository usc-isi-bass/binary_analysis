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
char sz[10000];
int i,a;
gets(sz);
a=0;
for(i=0;sz[i]!='\0';i++){
if(sz[i]!=' '){
a=a+1;
}else{
if(a!=0){
printf("%d",a);
printf(",");
a=0;
}
}
}
printf("%d",a);
return 0;
}