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
    int n;
    int i,j;
    char a[100][10];
    int x[100];
    scanf("%d",&n);   
    for(i=0;i<n;i++)
    scanf("%s %d",a[i],&x[i]);
    for (j=100;j>=60;j--)
    {
                    for(i=0;i<n;i++)                
                    {
                        if(x[i]==j)
                        printf("%s\n",a[i]);
                    }
    }
    for(i=0;i<n;i++)
    {
                    if(x[i]<60)
                    printf("%s\n",a[i]);
    }
    getchar();
    getchar();
}

        