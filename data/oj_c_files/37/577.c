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
   int t;
   scanf("%d",&t);
   for(int v=0;v<t;v++)
   {
      char s[100000];
      scanf("%s",s);
      int a[26]={0};
      for(int i=0;i<strlen(s);i++)
      {
          int m=s[i]-'a';
          a[m]++;
      }
      int p=0;
      for(int i=0;i<strlen(s);i++)
      {
         int m=s[i]-'a';
         if((a[m]==1)&&(p==0))
         {
             printf("%c\n",s[i]);
             p++;
             break;                 
         }
      }  
      if(p==0) printf("no\n");     
   }   
   getchar();
   getchar();
}
