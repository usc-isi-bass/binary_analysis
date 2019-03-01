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
    int n,i,k,a,time;
    k=1;
    time=0;
    scanf("%d",&n);
    int*sz=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
                    scanf("%d",&sz[i]);
    }
    for(i=0;i<n-1;i++)
    {
                    for(k=i+1;k<n;k++)
                    {
                              if(sz[i]==sz[k])
                              {
                                              for(a=k;a<n-1;a++)
                                              {
                                              sz[a]=sz[a+1];
                                              }
                                              n--;
                                              k--;
                              }
                    }
    }
    for(i=0;i<n;i++)
    {
                         if(i==0)
                         printf("%d",sz[i]);
                         else if(i!=0)
                         printf(" %d",sz[i]);
    }
    free(sz);
return 0;
}