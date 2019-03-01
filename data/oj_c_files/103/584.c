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
{int i,j,k,t;
 char s[1000],last;
 scanf("%s",s);
// printf("%d%d",'a','A');
 for (i=0;s[i]!='\0';i++)
   if (s[i]<97) s[i]=s[i]+32;
 last='!';
 for (i=0;s[i]!='\0';i++)
 { k=0;
   if (s[i]!=last)
   {
   last=s[i];
   for (j=i;s[j]==last;j++)
      k=k+1;
       
       printf("(%c,%d)",s[i]-32,k);
    
   }
 }    
   

 return 0;
}
