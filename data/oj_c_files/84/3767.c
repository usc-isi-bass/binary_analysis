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

main()
{
int n,i,max1=0,max2=0,a[999];
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<=n;i++) 
{
if(a[i]>max1&&a[i]>max2) {max2=max1;max1=a[i];}
else if(a[i]<max1&&a[i]>max2) {max2=a[i];}
else if(a[i]<max1&&a[i]<max2) {}
}
printf("%d\n%d",max1,max2);
}