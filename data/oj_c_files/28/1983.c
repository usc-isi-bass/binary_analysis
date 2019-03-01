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

char a[50000];
    
int main()
{
    gets(a);
    int i,j;
    int n=strlen(a);
    int flag=0;
    int isfirst=1;
     a[n]=' ';
    for(j=0;j<n;j++)
    {
        if(a[j]!=' ') 
        {  
         flag++;
         }
        
     if(a[j+1]==' '&&a[j]!=' '&&isfirst!=1) 
     {printf(",%d",flag);
      flag=0;}   
     if(a[j+1]==' '&&a[j]!=' '&&isfirst==1) 
     {printf("%d",flag);
      isfirst=0;
      flag=0;}
    
    
    
    
     } 
return 0;
}