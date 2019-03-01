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
    char s[51],w[51];
    scanf("%s",s);
    scanf("%s",w);
    int i,j,x,l1,l2;
    l1=strlen(s);
    l2=strlen(w);
    for(i=0;i<l2;i++)
    {
        if(s[0]==w[i])
        {
            x=0;
            for(j=0;j<l1;j++)
            {
                if(s[j]!=w[i+j])
                    break;
                else
                    x=x+1;
            }
            if(x==l1)
            {    
                printf("%d",i);
                return 0;
            }  
        }
    }
    return 0;
}