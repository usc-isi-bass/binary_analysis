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

void main()
{
    int c[20000]={0},a,i=0,n,p=0,j,k;
    scanf("%d",&n);
    while (i<n)
    {
        scanf("%d",&a);
        for ( j=0,k=0; j<i; j++)
        {
            if (c[j]==a)
            {
                k=1;
                break;
            }
           
        }
  
        if (k==0)
        {
            c[p]=a;
            p++;
        }
        i++;
        
    }
    for (j=0; j<p; j++)
    {
        printf("%d",c[j]);
        if(j<p-1) printf(" ");
    }
}