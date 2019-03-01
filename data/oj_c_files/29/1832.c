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
int m,n,fm,fn,i,j;double s=0;
scanf("%d",&m);
for(i=1;i<=m;i++){s=0;scanf("%d",&n);fm=1;fn=1;
for(j=1;j<=n;j++){fm=fm+fn;fn=fm-fn;s+=(1.0*fm)/fn;}


printf("%.3f\n",s);



}

return 0;
}