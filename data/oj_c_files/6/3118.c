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
int k,i,e;
scanf("%d",&k);
for(i=0;i<k;i++){
int a,b,c,d,total;
scanf("%d%d",&a,&b);
if(a==1&&b==1){
scanf("%d",&c);
printf("%d",c);
}else{
int sz[a][b];
for(c=0;c<a;c++){
for(d=0;d<b-1;d++){
scanf("%d",&sz[c][d]);
}
scanf("%d\n",&sz[c][b-1]);
}
total=0;
for(c=0;c<a;c++){
total=total+sz[c][0];
total=total+sz[c][b-1];
}
for(c=0;c<b;c++){
total=total+sz[0][c];
total=total+sz[a-1][c];
}
total=total-sz[0][0];
total=total-sz[0][b-1];
total=total-sz[a-1][0];
total=total-sz[a-1][b-1];
printf("%d\n",total);
}
}
return 0;
}