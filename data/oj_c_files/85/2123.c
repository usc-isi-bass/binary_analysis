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

int s(char n)
{
    if(('a'<=n&&n<='z')||('A'<=n&&n<='Z')||n=='_')
        return 1;
    else return 0;
}
int f(char n)
{
    if(('a'<=n&&n<='z')||('A'<=n&&n<='Z')||n=='_'||('0'<=n&&n<='9'))
        return 1;
    else return 0;
}
int main()
{
    int i,j,n,fl;
    char w[30];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int fl=1;
        scanf("%s",w);
        if(!s(w[0]))fl=0;
        for(j=1;j<strlen(w);j++)if(!f(w[j]))fl=0;
        fl?printf("yes\n"):printf("no\n");
    }
        return 0;
}