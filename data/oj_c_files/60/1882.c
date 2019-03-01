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
int n,i,j,k,K,s;
int a[10000]={0}; 
scanf("%d",&n);
k=0;
s=0;
for(i=2;i<=n;i++)
    { 
        for(j=2;j<=i;j++)
        {
        if(i%j==0)
        break;
        else;        
        }
        
        if(i==j)
          {
            a[k]=i; 
            k++;
          }  
     }
K=k;
for(k=0;k<K;k++)
{
    if((a[k+1]-a[k])==2)
   { printf("%d %d\n",a[k],a[k+1]); 
    s++;}  
}
if(s==0)
printf("empty");              

return 0;     
} 