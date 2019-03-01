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
    char a[1000],b[1000];
    int i,la,lb,A[1000]={0},B[1000]={0};
    scanf("%s",a);
    scanf("%s",b);
    la=strlen(a);
    lb=strlen(b);
    if(la!=lb)
    {
        printf("NO");
        return 0;
    }
    else
    {
        for(i=0;i<la;i++)
        {
            A[a[i]]++;
            B[b[i]]++;
        }
    }
    for(i=0;i<1000;i++)
    {
        if(A[i]!=B[i])
        {
        printf("NO");
        break;
        }
        if(i==999)
        {
            printf("YES");
            break;
        }
    }
    return 0;
}
