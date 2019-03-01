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
    int i,j,k,l,m,n,a[10000],b[10000];
    memset(a,0,sizeof(a)); memset(b,0,sizeof(b));
    scanf("%d",&n);
    while (1)
    {
          scanf("%d%d",&i,&j);          
          if ((i==0)&&(j==0)) break;
          a[i]=1;
          b[j]++;
    }
    l=0;
    for (i=0;i<n;i++)
        if ((a[i]==0)&&(b[i]==n-1)) 
        {
           l=1;
           printf("%d",i);
        }
    if (l==0) printf("NOT FOUND");
}
