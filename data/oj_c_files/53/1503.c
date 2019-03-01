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
int a[n];
for (int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    for (int j=0;j<i;j++)
        if (a[i]==a[j]) {i--;n--;break;}
    }
printf("%d",a[0]);
for (int i=1;i<n;i++)
    printf(",%d",a[i]);
}
