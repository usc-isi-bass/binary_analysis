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


int a[21];
void cal()
{
     a[0]=1;
     a[1]=1;
     for(int i=2;i<=20;i++)
     a[i]=a[i-1]+a[i-2];
 }
int main()
{
    int t;
    scanf("%d",&t);
    cal();
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",a[n-1]);
    }
    
    return 0;
}