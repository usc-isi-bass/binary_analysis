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

int main()
{
int a[100000],i,n,k,b;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&k);
for(i=0;i<n;i++) {
if(a[i]!=k){
b=a[0];
a[0]=a[i];
a[i]=b;
break;
}
}
printf("%d",a[0]);
for(i=1;i<n;i++) if(a[i]!=k)printf(" %d",a[i]);
return 0;
}

