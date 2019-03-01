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
    int n,i,j,m,y;
    scanf("%d", &n);
    int a[20000];
    int b[20000];
    for(i=0;i<n;i++)
    {
                    scanf("%d", &a[i]);
    }
    printf("%d", a[0]);
    
    for(i=1;i<n;i++)
    { 
                    y=0;
                    for(j=0;j<=i-1;j++)
                    {
                          if(a[i]==a[j])
                          {
                                y++;
                          }
                    }
                    if(y==0)
                    printf(" %d", a[i]);
    }             

    return 0;
}
                                    
                   