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
    int a[26],n,i,I,j,p,k;
    char s[100000],first=124;
    scanf("%d",&n);
    for (I=1;I<=n;I++)
    {
        first=124;
        for (j=0;j<=25;j++)
        a[j]=0;
        scanf("%s",s);
        for (j=0;j<strlen(s);j++)
        {
            a[s[j]-97]++;
            if ((a[s[j]-97]==1)&&(first==124))
            {
                p=0;
                for (k=j+1;k<strlen(s);k++)
                if (s[k]==s[j])  p=1;
                if (p==0)
                first=s[j];
            }

        }

        p=0;
        for (i=0;i<=25;i++)
        if (a[i]==1)
        p=1;
        if (p==0)
        printf("no\n");
        else
        printf("%c\n",first);
    }
}
