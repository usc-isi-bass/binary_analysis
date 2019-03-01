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
      char a[1001],c;
      gets(a);
      int i;
      int k=1;
      for(i=0;a[i]!='\0';i++)
      {
           if ((a[i+1]==a[i])||(a[i+1]==a[i]+'A'-'a')||a[i+1]==(a[i]-'A'+'a'))
               k++;
           else
           {
               if(a[i]<'a')
                  printf("(%c,%d)",a[i],k);
               else
               {   
                  c=a[i]+'A'-'a'; 
                  printf("(%c,%d)",c,k);
               }
               k=1;
           }
      }
}