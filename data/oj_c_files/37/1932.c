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
      int i,j,k,t,x,u,count,a[100001];
      char string[100001];
      scanf("%d",&t);
      for(i=1;i<=t;i++)
      {
                       memset(string,0,sizeof(string));
                       scanf("%s",string);
                       count=strlen(string);
                       memset(a,0,sizeof(a));
                       for(j=0;j<=count-1;j++)
                       for(k=0;k<=count-1;k++)
                       if(string[j]==string[k])
                       a[j]++;
                       x=0;
                       for(u=0;u<=count-1;u++)
                       if(a[u]==1)
                       {
                                  printf("%c\n",string[u]);
                                  x++;
                                  break;
                       }
                       if(x==0)
                       printf("no\n");
      }
      
}

                       
                       
      
      
      
      
