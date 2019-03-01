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

int F(int n);
int main(){
int n,z,i,sz[1000],result;
scanf("%d",&z);

for(i=0;i<z;i++){
scanf("%d",&(sz[i]));
}

for(i=0;i<z;i++){
n=sz[i];
result=F(n);
printf("%d\n",result);
}

return 0;
}



int F(int n){
scanf("%d",&n);
if(n==1){return 1;}
if(n==2){return 1;}
else{return F(n-1)+F(n-2);}
}
