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
   int t,i,l,j;
   char string[100000];
   int count[26];
   scanf("%d",&t);
   for(int m=0;m<t;m++)
   {
      int count[26]={0};
      scanf("%s",string);
      l=strlen(string);
      for(j=0;j<l;j++)
      {
         for(i=0;i<26;i++)
         {
            if(string[j]==i+'a')
               count[i]++;
         }
      }
      for(j=0;j<l;j++)
      {
          if(count[string[j]-'a']==1)
          {
            printf("%c\n",string[j]);
            break;
          }  
      }
      if(j==l)
        printf("no\n");
   }
   getchar();
   getchar();
} 