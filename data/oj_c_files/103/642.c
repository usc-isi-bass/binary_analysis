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
      int a,i;
      char str[1001];
      a=1;
      scanf("%s",str);
      for(i=0;;i++)
      {
                   if(str[i]=='\0')
                   break;
                   if(str[i]>96)
                   str[i]=str[i]-32;
      }
      for(i=0;;i++)
      {           
                   
                   if(str[i]==str[i+1])
                   a++;
                   else
                   {
                   printf("(%c,%d)",str[i],a);
                   a=1;
                   }
                   if(str[i+1]=='\0')
                   break;
                   
      }

} 
