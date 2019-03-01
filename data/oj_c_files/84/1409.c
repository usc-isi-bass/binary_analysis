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
int  n,u[100],i;
scanf("%d",&n);
for(i=1;i<=n;i++){ scanf("%d",&u[i]);
}
int s=0,m=0;
for(i=1;i<=n;i++){
while(s<u[i]) s=u[i];
}
for(i=1;i<=n;i++){
while(m<u[i]&&u[i]<s) m=u[i];
}
printf("%d\n%d\n",s,m);
return 0;
}