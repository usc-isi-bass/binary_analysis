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

int n;
int run()
{
        int i,j,a[33],b[33];
        for(i=1;i<=n;i++)
                scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
                b[i]=1;
        for(i=1;i<=n;i++)
                for(j=i+1;j<=n;j++)
                        if(a[i]>=a[j])
                                if(b[j]<b[i]+1)
                                        b[j]=b[i]+1;
        j=0;
        for(i=1;i<=n;i++)
                if(b[i]>j)
                        j=b[i];
        printf("%d\n",j);
}
int main()
{
        scanf("%d",&n);
        while(n!=0)
        {
                run();
                n=0;
                scanf("%d",&n);
        }
        return 0;
}