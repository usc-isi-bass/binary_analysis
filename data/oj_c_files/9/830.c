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


char id[101][11];

int main()
{   int n;
    int age[101],a[101];
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%s%d",id[i],&age[i]);
        int j=i;
        if (age[i]>=60)
        {
           for (;j>1&&age[a[j-1]]<age[i];j--)
           a[j]=a[j-1];
        }
        a[j]=i;
    }
    for (int i=1;i<=n;i++)
    printf("%s\n",id[a[i]]);
    getchar();
    getchar();
    return 0;
    
}
