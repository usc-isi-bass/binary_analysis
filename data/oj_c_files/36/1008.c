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
    char a[100],b[100],cha;
    int i,j,m,n;
    scanf("%s%s",a,b);
    m=strlen(a);
    n=strlen(b);
    if(m!=n)
    printf("NO\n");
    else
    {
        for(i=1;i<m;i++)
        for(j=0;j<m-i;j++)
        {
            if(a[j]>a[j+1])
            {
                cha=a[j];
                a[j]=a[j+1];
                a[j+1]=cha;
            }
        }
        for(i=1;i<n;i++)
        for(j=0;j<n-i;j++)
        {
            if(b[j]>b[j+1])
            {
                cha=b[j];
                b[j]=b[j+1];
                b[j+1]=cha;
            }
        }
        if(strcmp(a,b)!=0)
        printf("NO\n");
        else 
        printf("YES\n");
    }
    
    return 0; 
}
