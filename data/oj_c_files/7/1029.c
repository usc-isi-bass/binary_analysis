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
    char s[256],sub[206],re[256];
    int i,j,n,m;
    scanf("%s",s);
    scanf("%s",sub);
    scanf("%s",re);
    n=strlen(sub);
    m=strlen(s);
    for (i=0;i<m-n+1;i++)
    {
        if (s[i]==sub[0])
        for(j=0;j<n;j++)
        {
            if (s[i+j]!=sub[j])
            break;
        }
        if (j==n)
        {
            for (j=0;j<i;j++)
            printf("%c",s[j]);
            printf("%s",re);
            for (j=i+n;j<m;j++)
            printf("%c",s[j]);
            break;
        }
    }
    if(i==(1+m-n))
    printf("%s",s);
}
