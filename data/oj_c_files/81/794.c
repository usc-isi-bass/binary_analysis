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
int a[5][5];
int b[5];
int i,k,n,m;
for(i=0;i<5;i++){
for(k=0;k<5;k++){
scanf("%d",&(a[i][k]));
}
}
scanf("%d%d",&n,&m);
if(n<0||n>4||m<0||m>4){
printf("error");
}
if(n>=0&&n<=4&&m>=0&&m<=4){
for(i=0;i<5;i++){
b[i]=a[n][i];
a[n][i]=a[m][i];
a[m][i]=b[i];
}
for(i=0;i<5;i++){
printf("%d",a[i][0]);
for(k=1;k<5;k++){
printf(" %d",a[i][k]);
if(k==4){
printf("\n");
}
}
}
}
return 0;
}

