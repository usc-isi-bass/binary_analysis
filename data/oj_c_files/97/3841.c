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
int money[6]={100,50,20,10,5,1};
int n,y;
scanf("%d",&n);
y=n;
int h[6]={0,0,0,0,0,0};
for(int i=0;i<6;i++){
if(y>=money[i]){
h[i]=y/money[i];
y=y%money[i];
}
  }
for(int i=0;i<6;i++){
printf("%d\n",h[i]);
}
return 0;
}