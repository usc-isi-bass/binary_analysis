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
   scanf("\n");
   while(t--)
   {
     char c[100000];
     int len=0,i,j;
     gets(c);
     len=strlen(c);
     for (i=0;i<len;i++)
      { 
        for (j=0;j<len;j++)
         { 
           if(j==i)
             continue;
           if (c[j]==c[i])
              break;
         }
        if(j==len)
            {
              printf("%c\n",c[i]);
              break;
            }
       }
      if(i==len)
        printf("no\n");
   } 
}