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
    int know[10000]={0},beknown[10000]={0};
    int n=0,i,x,y,flag,t;
    scanf("%d",&n);
    x=y=1;
    t=0;
    while(x+y!=0)
    {
        scanf("%d %d",&x,&y);
        know[x]++;
        beknown[y]++;
    }
    flag=0;
    for (i=0;i<n;i++)
    {
        if ((know[i]==0)&&(beknown[i]==n-1)){flag=1;t=i;}
    }
    if (flag==1) printf("%d",t);
    else {
        printf("NOT FOUND");
    }
        
}
