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
    int m,n,i,j=0,k=1,a[5]={0},t;
    scanf("%d",&m);
    for(i=1;i<=10000;i=i*10)
    {
                            if(m/i!=0)
                            j++;
                            else 
                            break;
    }
    for(i=1;i<j;i++)
    {
                    k=10*k;
    }
    for(i=j;i>=1;i--)
    {
                     a[i]=m/k;
                     m=m%k;
                     k=k/10;
    }
    for(i=1;i<=j;i++)
    {
                    printf("%d",a[i]);
    }
    getchar();
    getchar();
    getchar(); 
}