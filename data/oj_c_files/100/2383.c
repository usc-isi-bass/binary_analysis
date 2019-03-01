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
    int i,b[52]={0},j,k=0,t=0;
    char a[52]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",temp;
    for(i=0;i<300;i++)
    {
        scanf("%c",&temp);
        if(temp=='\n') break;
        for(j=0;j<52;j++)
        {
            if(a[j]==temp)
            {
                b[j]++;
                t=1;
            }
        }
    }
    if(t==0) printf("No\n");
    else
    for(i=0;i<52;i++)
    {
        if(b[i])
        printf("%c=%d\n",a[i],b[i]);
    }
    return 0;
}
