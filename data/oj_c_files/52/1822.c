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
    void move(int *pa,int m,int n);
    int a[110],*pa=a;
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&*(pa+i));
    move(pa,m,n);
    for(i=0;i<n-1;i++)
    printf("%d ",*(a+i));
    printf("%d\n",*(a+n-1));
    getchar();
    getchar();
}
void move(int *a,int m,int n)
{
    int temp,i,j;
    for(i=n-m;i<n;i++)
    {
        for(j=i-1;j>=m-n+i;j--)
        {
            temp=*(a+j);
            *(a+j)=*(a+j+1);
            *(a+j+1)=temp;
        }
    }
}
