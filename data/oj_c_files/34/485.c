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
int n,i,t[1000];
scanf("%d",&n);
t[0]=n;
for(i=0;t[i]!=1;i++){
if(t[i]%2==0){t[i+1]=t[i]/2;printf("%d/2=%d\n",t[i],t[i+1]);}
else{t[i+1]=3*t[i]+1;printf("%d*3+1=%d\n",t[i],t[i+1]);}
}
printf("End\n");
return 0;
}