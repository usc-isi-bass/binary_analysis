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
    int n=0,k=0,i=0,j=0;
    int a[1002]={0};
    int ans=0;
    scanf("%d%d\n",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                ans=1;
                break;
            }
        }
        if(ans==1)
            break;
    }
    if(ans==1)  
		printf("yes\n");
    else 
		printf("no\n");
    return 0;
}