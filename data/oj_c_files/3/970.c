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
int n,f,k,s;
int sz[1000];
f=0;
scanf("%d%d",&n,&k);
for(int i=0;i<n;i++){
scanf("%d",&(sz[i]));
}




for(int j=0;j<n;j++){
 for(int m=j+1;m<n;m++){
  s=sz[j]+sz[m];
if((s==k)&&(f==0)){
f=1;
printf ("yes");
break;
 }}
if (f==1) break;
}
if(f==0)printf("no");

return 0;
}
