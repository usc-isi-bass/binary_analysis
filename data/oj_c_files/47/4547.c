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


int main(void)
{
int arr[100], n;
int i;
scanf("%d",&n);
for(i=0;i<n;++i)
scanf("%d",&arr[i]);
for(i=0;i<n/2;++i)
{
arr[i]^=arr[n-i-1];
arr[n-i-1]^=arr[i];
arr[i]^=arr[n-i-1];
}
for(i=0;i<n;++i)
{
printf("%d",arr[i]);
if(i!=n-1)
printf(" ");
}
return 0;
}
