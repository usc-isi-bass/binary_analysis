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

main()
{
int n,q,t,i,j,count=0;
int *x,*y;
scanf("%d",&n);
x=(int*)malloc(sizeof(int)*(n+5));
y=(int*)malloc(sizeof(int)*(n+5));
for(q=0;q<=n+3;q++)
{
x[q]=0;
y[q]=0;
}


    for(t=0;;t++)
    {
    scanf("%d %d",&i,&j);
    if(i==0&&j==0){break;}
    x[j]+=1;
    y[i]+=1;
    }

    for(t=0;t<=n-1;t++)
    {
    if(x[t]==n-1&&y[t]==0)
    {
    printf("%d\n",t);
    count+=1;
    }
    }
    if(count==0)
    printf("NOT FOUND");
}
