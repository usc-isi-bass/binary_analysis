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
    int *a[20000];
    int i,m,n;
    int *k;
    for(;;)
    {
        scanf("%d %d",&n,&m);
        if(n==0) return 0;
        for(i=1;i<n;i++) a[i]=&a[i+1];
        a[n]=&a[1];
        k=&a[1];
        if (m==1) printf("%d\n",n);
        else {
        while(k!=*k)
        {
            for(i=1;i<m-1;i++) k=*k;
            *k=*(int*)(*k);
            k=*k;
        }
        printf("%d\n",k-(int *)&a[1]+1);
        }
    }
}