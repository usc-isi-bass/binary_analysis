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

int main(void)
{
    char a[SIZE], b[SIZE],r;
    int bn[SIZE], i, n, l, j, k, ok, max=0;
    scanf("%d",&l);
    while ((r=getchar())!='\n');
    gets(a);
    n = strlen(a);
    for (i=0;i+l<=n;i++)
        bn[i]=0;
    for (i=0;i+l<=n;i++)
    {

        for (j=0;j<l;j++)
            b[j]=a[i+j];
        for (k=i+1;k+l<=n;k++)
        {
            ok=1;
            for (j=0;j<l;j++)
                if (b[j]!=a[k+j])
                {
                    ok=0;
                    break;
                }
            if (ok)
                bn[i]++;
        }
        if (bn[i]>max)
            max=bn[i];
    }
    if(max>0){
    printf("%d\n",max+1);
    for (i=0;i+l<=n;i++)
        if (bn[i]==max)
            {for (j=0;j<l;j++)

                printf("%c",a[i+j]);
                printf("\n");}}
                else
                printf("NO");

                return 0;
            }
