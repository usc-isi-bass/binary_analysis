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

int max(int x,int y)
{
    if(x>=y) return x;
    else return y;
}
int haha(int a[],int b[],int k)
{
    int i,j,c=0;
    b[k-1]=1;
    for(i=k-2;i>=0;i--)
    {
         for(j=i+1;j<k;j++)
         {
              if(a[i]>=a[j]) c=max(c,b[j]);  
         }
         b[i]=c+1;
         c=0;
    }
    for(i=k-1;i>-1;i--) c=max(c,b[i]);
    return c;
}
int main()
{
    int a[25],b[25]={0},k,i;
    scanf("%d",&k);
    for(i=0;i<k;i++) scanf("%d",&a[i]);
    printf("%d",haha(a,b,k)); 
       
}
