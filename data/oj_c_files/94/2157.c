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

int main(){int i,j,l,cout=0,n,c,k;
int a[500];scanf("%d",&n);
for(i=0;i<=n-1;i++){scanf("%d",&c);if(c%2!=0){a[cout]=c;cout++;}}

for(j=0;j<=cout-2;j++){for(k=cout-1;k>j;k--){if(a[k]<a[k-1]){a[k]=a[k]+a[k-1];a[k-1]=a[k]-a[k-1];a[k]=a[k]-a[k-1];}}}
for(l=0;l<=cout-2;l++){printf("%d,",a[l]);}printf("%d",a[cout-1]);return 0;}