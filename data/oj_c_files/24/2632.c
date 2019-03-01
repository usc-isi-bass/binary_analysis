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
    int i,n,x[250]={0},min=100,max=0;
    char s[250][50]={0};
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
          scanf("%s",*(s+i));              
    }
    
    for(i=0;i<n;i++)
    {
        *(x+i)=strlen(*(s+i));               
    }
    
    for(i=0;i<n;i++)
    {
        if(*(x+i)>max)
            max=*(x+i); 
        if(*(x+i)<min)
            min=*(x+i);               
    }
    
    for(i=0;i<n;i++)
    {
        if(*(x+i)==max)
        {
            printf("%s\n",*(s+i)); 
            break;              
        }                
    }
    
    for(i=0;i<n;i++)
    {
        if(*(x+i)==min)
        {
            printf("%s\n",*(s+i)); 
            break;              
        }                
    }
    
    
    
    
    
    
    scanf("%d",&n);
    return 0;    
}
