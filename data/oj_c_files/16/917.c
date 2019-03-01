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
    int n;
    int i;
    scanf("%d",&n);
    int k,count=0,s=1;
    int sum=0;
    while(n!=0)
    {
         k=n%10;
         if(k==0)
         count++;                
         n=n/10;
         sum=sum*10+k;
    }
    for(i=1;i<=count;i++)
    printf("0");
    printf("%d",sum);
    getchar();
    getchar();
}     
