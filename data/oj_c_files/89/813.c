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
    int n,k,i,j,q,s=0;
    scanf("%d",&n);
    int*a=(int*)malloc(n*sizeof(int));
    int*b=(int*)malloc(n*sizeof(int));
    for(k=0;k<n;k++)
    {
                    a[k]=0;
                    b[k]=0;
    }
    for(k=0;;k++)
    {
                 scanf("%d %d",&i,&j);
                 if(i==0&&j==0) break;
                 a[i]+=1;
                 b[j]+=1;
    }
    for(k=0;k<n;k++)
    {
                    if(b[k]==n-1&&a[k]==0)
                    {
                                          printf("%d",k);
                                          s+=1;
                    }
    }
    if(s==0) printf("NOT FOUND");
    return 0; 
}
