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
char a[101] ;
gets(a);
char b=a[0];
for(int i=0;a[i];i++){
if((b==' ')&&(a[i]==' ')){
continue;
}else{
printf("%c",a[i]);
b=a[i];
}
}
printf("\n");
return 0;
}
