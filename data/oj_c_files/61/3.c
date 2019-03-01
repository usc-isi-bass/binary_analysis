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
    int *p,i,n,j,k;
    p=(int*)malloc(10000*sizeof(int));
    *(p+1)=*p=1;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&k);
        if(k>2)
        {
            for(i=2;i<k;i++)
            *(p+i)=*(p+i-1)+*(p+i-2);
            printf("%d\n",*(p+k-1));
        }
        else printf("%d\n",*(p+k-1));
    }
}
