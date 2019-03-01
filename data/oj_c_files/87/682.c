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
int a,b,c,d,e,f,sum=0,i;
for(i=0;i<1000;i++){
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(a!=0){
d=d+12;
sum=(d-a)*3600+(e-b)*60+(f-c);
printf("%d\n",sum);
}sum=0;
}
	return 0;
}