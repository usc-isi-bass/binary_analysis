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
    int n,i,j,del,s;
    s=0; 
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&del);
    for(i=0;i<n;i++)
    {
        if(a[i]==del)
        {
            for(j=i;j>s;j--)
            {
                a[j]=a[j-1];                
            }
            s++;
        }
    } 
    for(i=s;i<n;i++)
    {
        printf("%d",a[i]);
        if(i<n-1) printf(" ");
    }
    return 0;
    } 
 