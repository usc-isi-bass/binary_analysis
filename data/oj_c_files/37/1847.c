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
    int n;
    scanf("%d",&n);
    for (int u = 1;u <= n;u ++)
    {
        char c[10010];
        int len,ok,y = 1;
        scanf("%s",c);
        len=strlen(c);
        for (int i = 0;i < len;i ++)
        {
            ok = 0;
            for (int j = 0;j < len;j ++)
            {
                if(i == j)
                    continue;
                else if (c[i]==c[j])
                    ok = 1;
                    
            }
            if (ok == 0)
            {
                printf("%c\n\n",c[i]);
                y = 0;
                break;
            }
        }
        if (y)
            printf("no\n\n");
    }
    
}