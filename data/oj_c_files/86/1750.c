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

int tiaosheng(int m,int *a);
int main()
{
    int *a,i,j,k,l,m,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                   // k=l=0;
                    scanf("%d",&m);
                   if(m==0)
                   {
                           printf("60\n");continue;
                   }
                    a=(int*)malloc(m*sizeof(int));
                    for(j=0;j<m;j++)scanf("%d",&a[j]);
                    printf("%d\n",tiaosheng(m,a));
    }
    return 0;
}
int tiaosheng(int m,int *a)
{
    int i,n;
    for(i=m-1;i>=0;i--)
    {
                    if((a[i]+3*(i+1))<=60)
                    {
                                          n=60-3*(i+1);break;
                    }
                    else if((a[i]+3*i)<=60)
                    {
                                            n=a[i];break;
                    }                
    }
    return n;
}      