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
    int n;
    int i,j;
    scanf("%d",&n);
    char sz[21];
    for(i=0;i<n;i++)
    {
        int zs=1;
        scanf("%s",sz);
        if(sz[0]>='0'&&sz[0]<='9')
        {
            zs=0;
        }else{
        for(j=0;sz[j];j++)
        {
            if(!((sz[j]=='_')||(sz[j]>='0'&&sz[j]<='9')||(sz[j]>='a'&&sz[j]<='z')||(sz[j]>='A'&&sz[j]<='Z')))
               {
                   zs=0;
               }
    }
        }
        if(zs==1)
            {
                printf("yes\n");
            }
          if(zs==0)
            {
                printf("no\n");
            }
    }
    return 0;
}
