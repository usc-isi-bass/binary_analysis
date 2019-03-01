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
      int n;
      scanf("%d",&n);
      char a[100000];
      int m;
      for (m=1;m<=n;m++)
      {
          scanf("%s",a);
          int count1,count2;
          int i,j;
          count2=0;
          for (i=0;a[i]!='\0';i++)
          {
              if (a[i]!='1')
              {
                            count1=1;
                            for (j=i+1;a[j]!='\0';j++)
                            {
                                if (a[j]==a[i])
                                {
                                               count1++;
                                               a[j]='1';
                                }
                            }
                            if (count1==1)
                            {
                                          printf("%c\n",a[i]);
                                          count2++;
                                          break;
                            }
              }
          }
          if (count2==0)
          {
               printf("no");
          }
      }
getchar();getchar();getchar();getchar();getchar();
} 
              
                                     
          
          
