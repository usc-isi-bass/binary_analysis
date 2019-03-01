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

void pr(char *a)
{
    int l,i,j,num[26];
    for(i=0;i<26;i++)
    {
        num[i]=0;
    }
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        num[a[i]-'a']+=1;
    }
    for(i=0,j=0;i<26;i++)
    {
        if(num[i]!=1)j++;
        if(j==26)printf("no\n");
    }
    if(j!=26)
    {
        for(i=0;i<l;i++)
        {
            if(num[a[i]-'a']==1)
            {
                printf("%c\n",a[i]);
                break;
            }
        }
    }
}
main()
{
    int t,i;
    char a[100000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",a);
        pr(a);
    }
}
