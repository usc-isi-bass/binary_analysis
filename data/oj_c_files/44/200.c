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

int qiufan(int a);

main()
{
    int a;
    int n;
    for(n=1;n<=6;n++)
    {
        scanf("%d",&a);        
        if(a>=0)
        {
            a=qiufan(a);        
        }
        else
        {
            a=0-a;
            a=0-qiufan(a);        
        }
        printf("%d\n",a);    
    }
    return 0;    
}

int qiufan(int a)
{
    int y=0,i=0,l=0,x;
    x=a;
    for(l=0;x!=0;l++)
    {
        x=x/10;                 
    }
    y=a%10;
    x=a/10;
    for(i=1;i<l;i++)
    {
        y=y*10+x%10;
        x=x/10;                
    }
    return(y);    
}
