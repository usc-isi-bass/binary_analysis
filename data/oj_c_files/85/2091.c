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
    int n,i,q;
    scanf("%d",&n);
    char zfc[22];
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]=0;
        scanf("%s",zfc);
        for(q=0;zfc[q];q++)
        {
            if(!((zfc[q]=='_')||(zfc[q]>='a'&&zfc[q]<='z')||(zfc[q]>='A'&&zfc[q]<='Z')||(zfc[q]>='0'&&zfc[q]<='9'&&q>0)))
            {
                a[i]=a[i]+1;
            }
            else
            {
                a[i]=a[i];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
