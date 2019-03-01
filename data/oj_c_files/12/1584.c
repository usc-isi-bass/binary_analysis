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
    int a[17],num=0,i=1,j,m;
    char c;
    while(1)
    {
        num=0;
        i=1;
        do
        {
            scanf("%d",&a[i]);
            c=getchar();
            i++;
        }while(c!='\n');
        m=i-2;
        if(!m) break;
        for(i=1;i<=m;i++)
        {
            for(j=i+1;j<=m;j++)
            {
                if(a[i]*2==a[j]||a[i]==2*a[j]) num++;
            }
        }
        printf("%d\n",num);
    }
    return 0;
}