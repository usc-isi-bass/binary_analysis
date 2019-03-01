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
      char ch,c[1001];
      int a,len,i;
      scanf("%s",c);
      len=strlen(c);
      if(c[0]>='a'&&c[0]<='z')
               ch='A'+c[0]-'a';
      else
               ch=c[0];
      a=1;
      for(i=1;i<=len-1;i++)
      {  if(c[i]-ch==0||c[i]-ch=='a'-'A')
            a++;
         else
           {
             printf("(%c,%d)",ch,a);
            if(c[i]>='a'&&c[i]<='z')
               ch='A'+c[i]-'a';
            else
               ch=c[i];
            a=1;
           }
      }
      printf("(%c,%d)",ch,a);
     
} 