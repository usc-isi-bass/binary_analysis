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
   int n,i,j;
   scanf("%d",&n);
   char s[n][255];
   for(i=0;i<n;i++)
   {
      scanf("%s\n",s[i]);
      for(j=0;s[i][j]!='\0';j++)
      {
         switch(s[i][j])
         {
            case 'C':
               s[i][j]='G';
               break;
            case 'G':
               s[i][j]='C';
               break;
            case 'A':
               s[i][j]='T';
               break;
            case 'T':
               s[i][j]='A';
               break;
         }
      }
      printf("%s\n",s[i]);
   }
   return 0;
}

