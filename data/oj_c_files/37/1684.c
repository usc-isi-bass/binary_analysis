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
      int t,i,j,k,num,lop;
      scanf("%d",&t);
      for(i=1;i<=t;i++)
      {
             char p[100871]={0};
             scanf("%s",p);
             lop=strlen(p);
             for(j=0;j<=lop-1;j++)
             {
                                  num=0;
                                  for(k=0;k<=lop-1;k++)
                                  if(p[j]==p[k]) num++;
                                  if(num==1) break;
             }
             if(num==1) printf("%c\n",p[j]);
             else printf("no\n");
      }
}