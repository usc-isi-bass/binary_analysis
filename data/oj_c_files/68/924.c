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

int P[250]={0};
void prime(int n)
{
    int i;
    for (i=1;P[i]*P[i]<=n;i++)
        if (n%P[i]==0)
           return;
    P[0]++;
    P[P[0]]=n;
}
int p(int n)
{
    int i;
    for (i=1;P[i]*P[i]<=n;i++)
        if (n%P[i]==0)
           return 0;
    return 1;
}
int main()
{
    int n,i,j;
    P[0]=1;
    P[1]=2;
    for (i=3;i<250;i++)
        prime(i);
    scanf("%d",&n);
    for (j=6;j<=n;j+=2)
        for (i=3;i<=j/2;i++)
            if (p(i) && p(j-i))
            {
               printf("%d=%d+%d\n",j,i,j-i);
               break;
            }
    getchar();
    getchar();
    return 0;
}
