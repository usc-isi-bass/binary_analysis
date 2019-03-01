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
    int n,a[300],b[300]={0},i,j,k=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%d",&a[i]);
    }
    b[0]=a[0];
    for(i=1;i<n;i++)
    {
                    for(j=0;j<i;j++)
                    {
                                    if(a[i]==a[j])
                                    break;
                                    s++;                                                                                                        
                    }
                    if(s==i)
                    {
                              k++;
                              b[k]=a[i];
                    }
                    s=0;
    }
    for(i=0;i<k;i++)
    {
                    printf("%d,",b[i]);
    }
    printf("%d",b[k]);
    scanf(" ");
    return 0;
}