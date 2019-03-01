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
int n,i,j,c;
scanf("%d",&n);
int count=0;
int f[1000][1000];
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d",&f[i][j]);
if(f[i][j]==0) count=count+1;}
scanf("\n");}
c=(((count+4)/4)-2)*(((count+4)/4)-2);
printf("%d",c);
return 0;}
