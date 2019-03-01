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
    char a[100000];
    int i,j,k,l,m,n;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
  {
     gets (a);
     m=strlen(a); 
     for(j=0;j<m;j++)
    {
        for(k=0,l=0;k<m;k++)
        {if(a[j]==a[k])
        l=l+1;}
        if(l==1)
        {printf("%c\n",a[j]);
        break;}    
    } 
     if(j>=m)
     printf("no\n");
 }    
  
    
   
   
 }    
