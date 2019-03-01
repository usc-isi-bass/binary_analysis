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
    char s[50],w[50];
    int i,k;
    scanf("%s%s",s,w);
    for(k=0;w[k]!='\0';k++)
    { 
        
              for(i=0;s[i]!='\0';i++)
              {
                   if(s[i]!=w[k+i])
                   {
                        break;
                   }
              }
              if(s[i]==0)
              {
                   printf("%d",k);
                   break;
              }
         
    }
    return 0;
}
