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
int n;
scanf("%d",&n);
int a[n],b[n],m=0;
for (int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    b[i]=1;
    }
for (int i=n-1;i>=0;i--)
    for (int j=i-1;j>=0;j--)
        if (a[j]>=a[i]&& b[j]<b[i]+1) b[j]=b[i]+1;
for (int i=0;i<n;i++)
    if (m<b[i]) m=b[i];
printf("%d",m);
}
