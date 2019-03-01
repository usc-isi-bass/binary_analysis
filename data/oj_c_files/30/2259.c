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
 int n,i,j;
 int sum=0;
 scanf("%d",&n);
 int sz[100];
 for(i=0;i<n;i++){
 sz[i]=i+1;
 if(sz[i]!=7&&sz[i]%7!=0&&sz[i]/10!=7&&sz[i]-sz[i]/10*10!=7){
 sum+=sz[i]*sz[i];};}
 printf("%d\n",sum);
 return 0;
}
 
 