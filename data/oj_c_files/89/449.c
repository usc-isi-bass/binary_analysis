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
    int n,a[65535]={0},i,j,sum=0;
    scanf("%d",&n);
    if(n==1)
    printf("0\n");
    while(1)
    {
            scanf("%d %d",&i,&j);
            if(i==0&&j==0)
            break;
            else
            {
                a[i]--;
                a[j]++;
            }
    }
    for(i=0;i<n;i++)
    {
                    if(a[i]==(n-1))
                    {
                                   printf("%d",i);
                                   sum++;
                    }
    }
    if(sum==0)
    printf("NOT FOUND");
    getchar();
    getchar();
}
