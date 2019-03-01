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
    char s[102];
    int i,j,k;
    int n;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    n=i;
    n=i;
    for(i=1;i<=n;i++)
    {
        for(j=0;s[j+i]!='\0';j++)
        {
            for(k=j;k<=j+i;k++)
            {
                if(s[k]!=s[2*j+i-k])
                {
                    break;
                }
            }
            if(k==j+i+1)
            {
                for(k=j;k<=j+i;k++)
                {
                    printf("%c",s[k]);
                }
                printf("\n");
            }
        }
    }
}
