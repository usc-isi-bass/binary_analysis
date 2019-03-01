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
int a,b,c,d,e,f,h,m,s,t;
for(;a!=0;){
scanf("%d%d%d%d%d%d\n",&a,&b,&c,&d,&e,&f);
d+=12;
h=d-a;
m=e-b;
s=f-c;
t=3600*h+60*m+s;
if(a!=0){
	printf("%d\n",t);}
}
return 0;
}
