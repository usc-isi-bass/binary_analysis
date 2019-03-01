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

int apple(int a,int b)
{
    int i,c=0;
    if(b==1) return(1);
    if(a==0) return(1);
    if(a<0) return(0);
    else return(apple(a,b-1)+apple(a-b,b));
}
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d %d",&a,&b);
    c=apple(a,b);
    printf("%d\n",c);
}
} 