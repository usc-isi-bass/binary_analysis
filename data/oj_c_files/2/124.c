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


void function(int,int);

int main()
{
   char s[200][100];
   int n[100],h[100],maxh[100];
   int a;
   int i,j,k,p;
   int num,maxnum=0;
   char c;

   scanf("%d",&a);
   for(i=0;i<a;i++)
   {
      scanf("%d%s",&n[i],s[i]);
   }

   for(j='A';j<='Z';j++)
   {
       num=0;
       for(i=0;i<a;i++)
       {
          for(k=0;k<strlen(s[i]);k++)
          {
             if(s[i][k]==j)
             {
                 num++;
                 h[num]=n[i] ;
             }
          }
       }
       if(num>maxnum)
       {
          c=j;
          maxnum=num;
          for(p=1;p<=maxnum;p++)
          {
             maxh[p]=h[p];
          }
       }
   }

   printf("%c\n%d\n",c,maxnum);
   for(p=1;p<=maxnum;p++)
   {
       printf("%d\n",maxh[p]);
   }
   return 0;

}