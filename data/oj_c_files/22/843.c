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
    unsigned int s[301],max=0,second=0;
    char c='0';
    int i=0,j;
    while(c!='\n')
    {
        scanf("%d%c",&s[i],&c);
        i++;
    }
    for(j=0;j<i;j++)
    {
        if(s[j]>max)
        {second=max;
        max=s[j];}
        else if(s[j]<max&&s[j]>second)
        second=s[j];
        else
        continue;
    }
    if(second)
    printf("%d",second);
    else
    printf("No");
    return 0;
}