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
     int shur[100],shu[100];
     int n,i;
     scanf("%d",&n);
      for(i=0;i<=n;i++){
scanf("%d",&shur[i]);
shu[n-i]=shur[i];
}
for(i=1;i<=n;i++){
if(i==n){printf("%d",shu[i]);break;}
printf("%d ",shu[i]);
}
return 0;
}
