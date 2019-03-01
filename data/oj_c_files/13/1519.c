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
    int a[20000];
    int check[100]={0};
    int n,i;
    
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (i=0; i<n; i++)
    {
        if (check[a[i]]==0)
        {
            if (i==0) {
                printf("%d",a[i]);
            }
            else
            {
                printf(" %d",a[i]);
            }
            check[a[i]]=1;
        }
    }
    return 0;
}