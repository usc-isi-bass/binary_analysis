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

int sushu(int x); 
int main()
{
int n,p,q=0;
scanf("%d",&n);    
for(p=4;p<=n;p++)
    {
     if( sushu(p)==1 && sushu(p-2)==1) //?????????? 
       {     
           printf("%d %d\n",p-2,p);
           q++;
       }     
    } 
if(q==0)
printf("empty"); 
return 0;        
}

int sushu(int x)
{
        int i,jsq,m;
        m=(int)sqrt(x);
        //jsq=0;
         
        for(i=2;i<=m;i++) 
        {
           if(x%i==0) 
           return 0;
        }
        return 1;
}