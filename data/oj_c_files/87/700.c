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
int a,b,c,d,e,f,total;
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
while(a!=0){
 total=3600*(d+12-a-1)+60*e+f+3600-60*b-c;
 printf("%d\n",total);
 scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
}
return 0;
}