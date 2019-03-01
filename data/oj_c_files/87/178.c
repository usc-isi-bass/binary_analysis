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
int a,b,c,d,e,f;
int i,k;
for(i=1;1!=0;i++){
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
k=a+b+c+d+e+f;
if(k==0){
	break;
}
i=(d-a+12)*3600+(e-b)*60+(f-c);
printf("%d\n",i);
}



return 0;
}
