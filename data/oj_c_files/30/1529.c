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

main()
{
    int i,j,k=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%7!=0)
        {
            if(i%10!=7)
            {
                if(i>=10&&((i/10)%7)!=0)
                {
                    //printf("%d ",i);
                    k=k+i*i;
                }
                if(i<10)
                {    
                    //printf("%d ",i);
                    k=k+i*i;
                }
            }
        }
    }
    printf("%d\n",k);
    
}
