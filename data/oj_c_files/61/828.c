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

main()
{
    int f[20];
    int n,i,j,a;
    f[0]=1;f[1]=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==1||a==2)
            printf("1");
        else
        {
            for(j=0;j+2<a;j++)
            f[j+2]=f[j]+f[j+1];
            printf("%d\n",f[a-1]);
        }        
    }
    getchar();
    getchar();
}