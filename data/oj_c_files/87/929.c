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
int a,b,c,d,e,f,s;
while(1){
scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
if((a==0)&&(b==0)&&(c==0)&&(d==0)&&(e==0)&&(f==0)){
break;
}
s=f+60-c;
s=s+60*(e+59-b);
s=s+3600*(d+11-a);
printf("%d\n",s);
}
return 0;
}