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
int n,k;
scanf("%d%d\n",&n,&k);
int sz[NUMBER];
int i,m,q=0;
for(i=0;i<n;i++){
scanf("%d",&(sz[i]));
}
int szf[NUMBER];

for(i=0;i<n;i++){
szf[i]=k-sz[i];
}
for(m=0;m<n;m++){
for(i=0;i<n;i++){
if(szf[m]==sz[i]&&szf[m]!=sz[m]){
printf("yes");
q=1;
break;
}
}
if(q)break;
}
if(q==0){printf("no");}
return 0;
}

