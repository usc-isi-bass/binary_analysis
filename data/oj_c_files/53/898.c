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
    int i,n,a[300]={0},flag[300]={0},p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
                    p++;
                    flag[a[i]]++;
                    if(flag[a[i]]==1&&p==1)
                    {printf("%d",a[i]);}
                    else if(flag[a[i]]==1&&p>1)
                    {printf(",%d",a[i]);}
                    else
                    continue;
    }
    return(0);
}
                                  
