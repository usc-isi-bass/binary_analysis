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
      int N,i;
      scanf("%d",&N);
      for(i=1;i<=N;i++)
      {
           char ch[100000];
           scanf("%s",ch);
           int j,k,ji=0;
           int m=strlen(ch);
           for(k=0;k<=m-1;k++)
           {
               for(j=0;j<=m-1;j++)
               {
                    if(k==j) continue;
                    if(ch[k]==ch[j]) break;
               }
               if(j==m) {printf("%c\n",ch[k]);break;}//chuxianle
           }
           if(k==m)printf("no\n");
      }
}