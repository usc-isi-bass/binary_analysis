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
   char a[1000],q;
   int ans[30];
   int n;
   int i,flag,j,k;
   
   scanf("%d",&n); 
   scanf("%c",&q);
      
   for (i=1;i<=n;i++) 
      {
          
          
          for (j=0;j<30;j++) ans[j]=0;
          flag=0;
                      
          gets(a);       
          
          
          for (j=0;j<strlen(a);j++) ans[a[j]-'a']++;
          
          for (j=0;j<strlen(a);j++)
            if (ans[a[j]-'a']==1)
             {
                 printf("%c\n",a[j]);                             
                 flag=1;      
                 break;   
             }
          if (flag==0) printf("no\n");
      } 
   return 0;
}

