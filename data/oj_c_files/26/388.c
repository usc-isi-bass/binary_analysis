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
      char str[10000]; 
      gets(str);
      int lenth,count=0;
      lenth=strlen(str);
      for(int i=0;i<lenth;i++)
      {
                          if(str[i]==' ')
                          count++;
                          else count=0;
                          if(count<2)
                          printf("%c",str[i]);
      }
      getchar();
      getchar();
      return 0;
}
      
      
