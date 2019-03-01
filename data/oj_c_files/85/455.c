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

char str[21];
int main()
{
    int n,m;
    int l1,l2;

    scanf("%d",&n);
    for (l1=1;l1<=n;l1++)
        {
            scanf("%s",str);
            m=strlen(str);
            for (l2=0;l2<m;l2++)
                if ((str[l2]>='0')&&(str[l2]<='9'))
                    if (l2==0)
                        break;
                    else;
                else if (!(((str[l2]>='a')&&(str[l2]<='z'))||((str[l2]>='A')&&(str[l2]<='Z'))||(str[l2]=='_')))
                    break;
            if (l2==m)
                printf("yes\n");
            else
                printf("no\n");
        }

    return 0;
}
