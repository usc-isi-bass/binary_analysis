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
    char s[100];
    int i,n,l=0,j,k=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
     scanf("%s",s);
        l=strlen(s);
      
        
        if(((s[0]>='A')&&(s[0]<='Z'))||((s[0]>='a')&&(s[0]<='z'))||(s[0]=='_') )
           {for (j=1;j<l;j++)
              if (((s[j]>='A')&&(s[j]<='Z'))||((s[j]>='a')&&(s[j]<='z'))||(s[j]=='_')||((s[j]>='0')&&(s[j]<='9')))
                k++;
              else
                {puts("no"); k=0;break;}
                
              if (k+1==l) {puts("yes");k=0;}} 
          
                  else
                    {puts("no");k=0;}
    }
                    
         return 0;   
        
}

