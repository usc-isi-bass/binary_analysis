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
    int n,*a,i,k=0,*b,t,j;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
                    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
                    if(a[i]%2!=0) {
                                        b[k]=a[i];
                                        k+=1;
                                   }
    }
    for(i=0;i<k-1;i++)
    {
                    for(j=i+1;j<k;j++)
                    {
                                    if(b[j]<b[i])
                                    {
                                                 t=b[j];
                                                 b[j]=b[i];
                                                 b[i]=t;
                                    }
                    }
    }
    for(i=0;i<k;i++) 
    {
                     if(i) printf(",");
                     printf("%d",b[i]);
    }
    return 0;
}