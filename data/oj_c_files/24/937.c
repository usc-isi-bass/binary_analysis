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
    char a[10000],b[50][50],lo[50],sh[50];
    int n,i,j,k=0,p[51],max=0,min=100;
    gets(a);
    n=strlen(a);
    
    j=0;
    for(i=0;i<n;i++)
    {    if(a[i]!=' '&&a[i]!='.')
          { b[j][k]=a[i];
           k++;}
           else if(a[i]==' ')
           {k=0;
           j++;} 
           
                    }
                 
  
    while(j>=0){
    p[j]=strlen(b[j]);
  
    if(p[j]<=min)
    {strcpy(sh,b[j]);
    min=p[j];
    }
    if(p[j]>=max)
    {strcpy(lo,b[j]);
    max=p[j];}
    j--;
}
  
     printf("%s\n",lo);
     printf("%s",sh);
     return 0;
    
    } 
