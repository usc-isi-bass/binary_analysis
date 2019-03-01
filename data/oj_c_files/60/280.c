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
    int b,i,j,k,n;
    scanf("%d",&n);
    int c[n];
    int a=0;
    int d=0;
    int e=0; 
    for(i=2;i<=n;i++)
    {
                    for(k=2;k<i;k++)
                    {
                                    b=i%k;
                                    if(b==0)
                                    break;
                                    else
                                    a=a+1;   
                    }
                    if(a==i-2) 
                    {
                               c[d]=i;
                               d=d+1;            
                    } 
                    a=0; 
    }
    
    for(j=0;j<=(n/2);j++)
    {
         if((c[j]+2)==c[j+1])
        { printf("%d %d\n",c[j],c[j+1]);
         e=e+1;
         }
    }
    if(e==0)
    printf("empty");
    getchar();
    getchar(); 



}