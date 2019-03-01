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
      int num=0,i;
      char str[1000],b,a;
      scanf("%s",str);
      for(i=0;i<strlen(str);i++)
        {
          for(b='A';b<='Z';b++)
          {
          if(str[i]==b || str[i]==b+32)
           {
             num=num+1;
             break;
           }
          }
          if(str[i+1]!=b && str[i+1]!=b+32)
          {
            printf("(%c,%d)",b,num);
            num=0;
          }
        }
    
    return (0);
    
}
