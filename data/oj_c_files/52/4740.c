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

int move(int *p,int x)
{
    int i;
    int temp;
    temp=*(p+x-1);
    for(i=x-1;i>0;i--)
    {
        *(p+i)=*(p+i-1);
    }
    *p=temp;
}
int main()
{
    int a[100]={0};
    int n,m;
    int i;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)scanf("%d",a+i);
    while(m--)
    move(a,n);
    for(i=0;i<n-1;i++)printf("%d ",*(a+i));
    printf("%d",*(a+i));

}
