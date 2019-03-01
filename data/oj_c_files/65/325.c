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
    int a,b,A=0,B=0,n,i,j;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d %d",&a,&b);
     j=a-b;
     if(j==-1||j==2)
     A++;
     else if(j==1||j==-2)
     B++;
     
  }
    if(A>B)
    printf("A");
    if(A<B)
    printf("B");
    if(A==B)
    printf("Tie");

}