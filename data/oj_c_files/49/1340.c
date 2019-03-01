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
{  char s[1000];
   int m,i,j,k,len,x,y,n,h;
   gets(s);
   len=strlen(s);
   for(n=2;n<=len;n++)
  {
   for(i=0;i<=len-n;i++)
  
   for(k=i,j=i+n-1;s[k]==s[j];k++,j--)
   if(k>=j)
  {
   for(h=i;h<i+n;h++)
   printf("%c",s[h]);
   printf("\n");break;}

   
   
}

}