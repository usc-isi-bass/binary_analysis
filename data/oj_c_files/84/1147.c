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
int n,e;
int x,y,z;
int i;
scanf("%d%d%d",&n,&x,&y);
if(x<y){
e=x;
x=y;
y=e;
}
for(i=1;i<=n-2;i++){
scanf("%d",&z);
if(x<z){
e=x;
x=z;
z=e;
if(z>y){
y=z;
}
}else if(x>z&&y<z){
x=x;
y=z;
}else if(z<y){
x=x;
y=y;
}
}
printf("%d\n%d",x,y);
return 0;
}