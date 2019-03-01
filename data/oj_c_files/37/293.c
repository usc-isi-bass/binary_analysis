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
      char a[100001]={0};
      int n,la,count;
      int b[26];
      scanf("%d",&n);
      for(int i=0;i<n;i++)
      {
              count=0;
              for(int j=0;j<26;j++)
              b[j]=0;
              for (int j=0;j<100001;j++)
              a[j]=0;
              scanf("%s",a);
              for(int j=0;;j++)
              {
                      if(a[j]==0) 
                      {
                                 la=j;
                                 break;
                      }
                      b[a[j]-'a']++;
              }
              for(int j=0;j<la;j++)
              {
                      if(b[a[j]-'a']==1)
                      {
                                        printf("%c\n",a[j]);
                                        count=1;
                                        break;
                      }
              }
              if(count==0)
              printf("no\n");
      }
}