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
    int i,a,n,num=1;
    char str[1001];
    scanf("%s",str);
    n=strlen(str);

    
    for (    i=0  ;i<=(n-1)   ;i++   )
    {
            if   (  str[i]>=97  )
            str[i]=str[i]-32;
    }
    
    
    for (    i=0  ;i<=(n-1)   ;i++   )
    {
            if (     str[i]==str[i+1]  )
            num++;
            else
            {
            printf("(%c,%d)",str[i],num);
            num=1;
            }
            
    }  
    
    
  
    
    
}
