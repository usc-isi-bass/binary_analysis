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
   char s[1010];
   scanf("%s",s);
   char x;
   int c=1;
   int l=strlen(s);
   int i;
   for(i=0;i<l;i++)
   {
      if('a'<=s[i]&&s[i]<='z')   s[i]=s[i]-'a'+'A';                  
   }
   for(i=0;i<l-1;i++)
   {
      x=s[i];
      if(s[i]==s[i+1]&&i==l-2)  {c++;printf("(%c,%d)",x,c);}
      if(s[i]==s[i+1]) c++;
      else {printf("(%c,%d)",x,c);c=1;}               
   }
   if(s[l-2]!=s[l-1])  printf("(%c,1)",s[l-1]);
}
