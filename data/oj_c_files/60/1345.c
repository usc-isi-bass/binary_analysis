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
    int sushu(int x);
    int N,n;
    scanf("%d",&N);
    if(N<=4)
    printf("empty");
    else
    {for(n=1;n<=(N-2);n++)
    if(sushu(n)==1)
    if(sushu(n+2)==1)
    printf("%d %d\n",n,(n+2));}        
}
int sushu(int x)
{
    int i,a;
    for(i=2;i<x;i++)
    if(x%i==0)
    break;
    if(i==x)
          a=1;
    else
          a=0;
    return(a);
}