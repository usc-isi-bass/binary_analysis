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
    int n,k,m,i;
    char a[100][10],over[100][10], below[100][10];
    char h[100][10];
    long int b[100];
    long int c[100]={0};
    long int d[100]={0}; 
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%s %d",a[i],&b[i]);
    }
    
    for(int i=1;i<=n;i++)
    {
        if (b[i]>=60)
          {c[i]=b[i];
          strcpy (over[i],a[i]);}
        else
          {d[i]=b[i];
          strcpy (below[i],a[i]);}
             
    }
for (k=101;k>=60;k--) 
{
    i=1;
    while (i<=n)
    {if (c[i]==k)
    {printf("%s\n",over[i]);}
    i++;
}
}
    i=1;
    while (i<=n)
    {
          if (d[i]!=0)
          printf("%s\n",below[i]);
    i++;
    }
 getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar();
}