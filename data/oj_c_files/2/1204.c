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


struct book
{
    int num;
    char author[27];
}book[1000];

int main()
{
    int n, i, a, max=0, alp[26]={0};
    char *j;

    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d %s", &book[i].num, book[i].author);
        int len=strlen(book[i].author);
        for(j=book[i].author;j<(book[i].author+len);j++)
        {
            int x=*j;
            ++*(alp+x-65);
            if(*(alp+x-65)>max)
            {
                max=*(alp+x-65);
                a=x;
            }
        }
    }

    printf("%c\n%d\n", a, max);

    for(i=0;i<n;i++)
    {
        int len=strlen(book[i].author);
        for(j=book[i].author;j<(book[i].author+len);j++)
        {
            if((int)*j==a)
                printf("%d\n", book[i].num);
        }
    }

    return 0;
}
