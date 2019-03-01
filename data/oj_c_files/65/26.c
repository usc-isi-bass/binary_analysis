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

int main (){
int n;
scanf("%d\n",&n);
int sz[n][2];
for(int i=0;i<n;i++){
for(int j=0;j<2;j++){
scanf("%d",&sz[i][j]);
}
}
int sum1=0;
int sum2=0;
for(int i=0;i<n;i++){
if(sz[i][0]-sz[i][1]==-1||sz[i][0]-sz[i][1]==2){
sum1++;
}
else if(sz[i][0]-sz[i][1]==1||sz[i][0]-sz[i][1]==-2){
sum2++;
}
}
if(sum1>sum2){
printf("A");
}
else if(sum1<sum2){
printf("B");}
else {
printf("Tie");
}
return 0;
}
