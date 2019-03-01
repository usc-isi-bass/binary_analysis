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

int main () {
int n,i,j,s,p,q=0;
scanf ("%d",&n);
for (i=1;i<=n-2;i++){
s=0;p=0;
for (j=1;j<=i;j++){
if (i%j==0){
s++;
}
if ((i+2)%j==0){
p++;
}
}
if (s==2&&p==1){
printf ("%d %d\n",i,i+2);
q++;
}
}
if (q==0){
printf ("empty");
}
return 0;
}

