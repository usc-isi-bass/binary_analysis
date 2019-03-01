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
  char s[1000];
  scanf("%d",&n);
  for(j=0;j<n;j++)
   { 
     scanf("%s",s);
     for(i=0;i<(int)strlen(s);i++)
      {
       if(s[i]=='A') s[i]='T';
       else if(s[i]=='T') s[i]='A';
       else if(s[i]=='C') s[i]='G';
       else if(s[i]=='G') s[i]='C';
       }
      printf("%s\n",s);
    }
   return 0;
}