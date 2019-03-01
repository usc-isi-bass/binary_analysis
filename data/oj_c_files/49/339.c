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

main()
{
    char s[LEN];
    scanf("%s",s);
    int slen=strlen(s);
    int i,j,k=LEN;
    for(i=2;i<=slen;i++)
    {
        for(j=0;(j+i)<=slen;j++)
        {
            for(k=j;k<=(j+i-1);k++)
               if(s[k]!=s[2*j+i-1-k]) break;
            if(k==(j+i))  
               for(k=j;k<=(j+i-1);k++)
               {
                   printf("%c",s[k]);
                   if(k==(j+i-1)) printf("\n");                    
               }                   
            k=LEN;
        }                       
    }
    getchar();
    getchar();
    getchar();
    
      
}
