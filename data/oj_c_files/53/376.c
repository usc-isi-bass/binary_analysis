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

int main() {
int y=0,x,i,j,n,a[100];
scanf("%d",&n);
scanf("%d",&x);
a[0]=x;
printf("%d",x);
for (i=1;i<n;i++) {
scanf("%d",&x);
a[i]=x;
y=0;
for (j=0;j<i;j++){
if (a[j]==x) y=1;
}
if (y==0) {
printf(",");
printf("%d",x);
}

}
}