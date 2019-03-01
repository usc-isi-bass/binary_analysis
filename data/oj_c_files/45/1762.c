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
    char s[50],w[50];
    scanf("%s%s",s,w);
    int same,i,k;
    for(i=0;w[i]!='\0';i++)
    { int result=1;
      for(k=0;s[k]!='\0';k++)
      {  
         if(w[i+k]!=s[k])
         same=0;
         else   
         same=1;
         result=result*same;
      }
      if(result==1)
      {printf("%d",i);
      break;}
    }
 
return 0;
}
