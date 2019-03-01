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
    int a,n;
    int i,j;
    scanf("%d",&n);
    int b[20];
    b[0]=1;b[1]=1;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a);
       if(a==1) printf("%d\n",b[0]);
       else if(a==2) printf("%d\n",b[1]);
       else if(a>2)
       {
            for(j=2;j<a;j++)
            b[j]=b[j-1]+b[j-2];
       printf("%d\n",b[a-1]);
       }
    }
    getchar();
    getchar();
}
