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

int t[10001];
int main()
{
   int i,n,m=0,t=0,x,y;
   scanf("%d",&n);
    for(i=0;i<n;i++)
{
    scanf("%d%d",&x,&y);
    if(x>=90&&x<=140&&y<=90&&y>=60){t++;m=m>t?m:t;}
    else t=0;
}
    printf("%d",m);
    return 0;
}
