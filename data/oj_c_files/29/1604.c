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
{int m,n,i,j;
float s;
cin>>m;
for(i=1;i<=m;i++)
{
s=0;
                 cin>>n;
float a[n];
float b[n];
float c[n];


a[0]=1;
a[1]=2;
b[0]=2;
b[1]=3; 
c[0]=2;
c[1]=1.5;              
   for(j=2;j<n;j++)
   {a[j]=a[j-1]+a[j-2];
    b[j]=b[j-1]+b[j-2];
    c[j]=b[j]/a[j];             
                 
                 
                 
                 
                 
                 }                
  for  (j=0;j<n;j++)
  s=s+c[j];             
                 
   printf("%.3f",s);
   cout<<endl;          
                 
                 
                 
                 }
  
   
    return 0;
    
    
    
    
}