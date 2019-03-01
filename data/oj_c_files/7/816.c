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
    int m,n,i,j,p,f;
    char str[257],a[257],b[257];
    gets(str);
    gets(a);
    gets(b);
    n=strlen(str);
    m=strlen(a);
    p=1;
    
    for(i=0;i<n;i++)
    {
        f=1;
        for(j=0;j<m;j++)
            if(str[i+j]!=a[j])
            {
                f=0;
                break; 
            }
        if((p)&&(f))
        {
           printf("%s",b);
           p=0;
           i+=m-1;
        }
        else
            printf("%c",str[i]);
    }

    return 0;
}