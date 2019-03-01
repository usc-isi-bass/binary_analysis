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
 int n,i,j;
 char a[101];
 while(gets(a))
 { 
         n=strlen(a);
         for(i=0;i<=n-2;i++)
         {
           printf("%c",a[i]);
         }
         printf("%c\n",a[n-1]);
         for(i=0;i<n;i++)   
         {
            if(a[i]==')')
            {                
               for(j=i;j>=0;j--)
               {
                  if(a[j]=='(')
                  {
                     a[j]=' ';
                     a[i]=' ';
                     break;
                  }
               }
            }
         }
         for(i=0;i<n;i++)
         {
            if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z'||a[i]==' ')
            {
              a[i]=' ';
            }
            else if(a[i]==')')
            {
                 a[i]='?';
            }
            else if(a[i]=='(')
            {
                 a[i]='$';
            }
         }
         for(i=0;i<n;i++)
         {
            printf("%c",a[i]);
         }
         printf("\n");
 }                
    
}
