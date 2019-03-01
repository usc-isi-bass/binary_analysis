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

int judge(int x)
{
    int i,k;
    for(k=0,i=2;i<=sqrt(x)+1;i++)
    {
        if(x%i==0)
            k++;
    }
    if(k==0)
    return(1);
    else
    return(0);
}
main()
{
    int n,i,k;
    scanf("%d",&n);
    for(i=3,k=0;i<=n-2;i=i+2)
    {

        if(judge(i)==1&&judge(i+2)==1)
        {
            printf("%d %d\n",i,i+2);
            k++;
        }
    }
    if(k==0)
        printf("empty\n");
    
}
        
        