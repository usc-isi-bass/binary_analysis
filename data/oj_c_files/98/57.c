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


int main(){
    int n,i,x,linelen=0;
    char words[40];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
            scanf("%s",words);
            if (linelen==0)
            x=strlen(words);
            else
            x=strlen(words)+1;
            if(linelen==0)
            {
                printf("%s",words);
                linelen+=x;
            }
            else if((linelen+x)<80)
            {
                printf(" %s",words);
                linelen+=x;
            }
            else if((linelen+x)==80)
            {
                printf(" %s\n",words);
                linelen=0;
            } 
            else if((linelen+x)>80)
            {
                 printf("\n%s",words);
                 linelen=x;
                 linelen--;
            }
    }

    return 0;    
}
