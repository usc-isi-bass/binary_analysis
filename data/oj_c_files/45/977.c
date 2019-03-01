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
    char a[100],b[100];
    int i,j,k,m,n,flag;
    scanf("%s",a);
    scanf("%s",b);
    n=strlen(a);
    m=strlen(b);
    for(i=0;i<m;++i)
    {
        for(j=0;j<n && j+i<m;++j)
        {
            flag=1;
            if(a[j]!=b[i+j])
            {
                flag=0;
                break;
            }
        }
        if(flag)
            break;
    }
    printf("%d",i);
    return 0;
}
            
