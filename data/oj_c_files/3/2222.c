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
int n,k,sz[N],an[X][Y],i,j,m=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++){
scanf("%d",&(sz[i]));
}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
an[i][j]=sz[i]+sz[j];
if(an[i][j]==k)
m=m+1;
}}
if(m==0)
printf("no");
else 
printf("yes");
return 0;
}
