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
  char v[100],c[100];
 gets(v);
  for(int i=0;i<=strlen(v)-1;i++)
   {
    if(i==strlen(v)-1)
     {
       c[i]=v[i]+v[0];               
     }     
    else
     {
      c[i]=v[i]+v[i+1];        
     }
   }
for(int j=0;j<=strlen(v)-1;j++)
{   
 printf("%c",c[j]);
} 
int u;scanf("%d",&u);    
   return 0;          
}
