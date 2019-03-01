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
int k,m,n,ans,i,j,x;
scanf("%d",&k);
while (k--){
scanf("%d%d",&n,&m);ans=0;
for (i=1;i<=n;i++){
if(i==1||i==n)
for (j=1;j<=m;j++) {scanf("%d",&x);ans+=x;}
else
for (j=1;j<=m;j++) {scanf("%d",&x);if(j==1||j==m) ans+=x;}
}
printf("%d\n",ans);
}
return 0;
}