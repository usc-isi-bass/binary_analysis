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
    int i,n,j,k,t=0;
    scanf("%d",&n);
    int*p=(int*)malloc(n*sizeof(int));
    int*q=(int*)malloc(n*sizeof(int));
    for(i=0;i<=n;i++)
    p[i]=q[i]=0;
    for(k=0;;k++)
    {
                 scanf("%d %d",&i,&j);
                 if((i==0)&&(j==0))break;
                 p[i]=p[i]+1;
                 q[j]=q[j]+1;}
    for(i=0;i<=n;i++)
    {
                     if((p[i]==0)&&(q[i]==n-1))
                     {
                                             printf("%d",i);
                                             t=t+1;
                     }
    }
    if(t==0)
    printf("NOT FOUND"); 
}
    
