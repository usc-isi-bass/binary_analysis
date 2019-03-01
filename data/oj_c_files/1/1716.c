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

int im(int n,int max)
{
    int s=0,i;
    if(n==1)
    return 1;
    for(i=max;i>1;i--)
    if(n%i==0)
    s+=im(n/i,i);
    return s;
}
int main()
{
    int i,n,t;
    scanf("%d%d",&n,&t);
    printf("%d",im(t,t));
    for(i=1;i<n;i++)
    {
                    scanf("%d",&t);
                    printf("\n%d",im(t,t));
    }
    //getch();
    return 0;
}
