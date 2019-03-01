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
    int n,m,i,j,x=0;
    int w[1000];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
     {
              scanf("%d",&w[i]);    
     }
    for(i=0;i<n-1;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    if(m==w[i]+w[j])
                                    {
                                                    x+=1;
                                                    break;
                                    }
                    }
                    if(x>0)
                    {
                           break;
                    }
    }
    
    if(x>0)
    {
           
            printf("yes");
    }
    else
    {
            printf("no");
    }
    
    return 0;
}
    