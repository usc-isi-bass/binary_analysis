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
int n,k,i,j;
scanf("%d%d",&n,&k);
int a[n];
char p;
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=1;j<n;j++)
    {
        if(a[i]+a[j]==k)
        {
            p='y';
            printf("yes");
            break;
        }
        else
        continue;
        }
    if(p=='y')
    break;
    else
    continue;
}
if(p=='y')
return 0;
else
printf("no");
return 0;
}
