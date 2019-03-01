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
    int n,i,j,max=0;
    int zuozhe[26]={0};
    char maxer;
    struct book
    {
         int num;
         char author[26];
    }
    shu[1000];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d %s",&shu[i].num,shu[i].author);
        for (j=0;j<26;j++)
           zuozhe[shu[i].author[j]-65]++;
    }
    for (j=0;j<26;j++)
        if (zuozhe[j]>max)
        {
            max=zuozhe[j];
            maxer=j+65;
        }
    printf("%c\n%d\n",maxer,max);
    for (i=0;i<n;i++)
        for (j=0;j<26;j++)
            if (shu[i].author[j]==maxer)
            {
                printf("%d\n",shu[i].num);
                continue;
            }
}
