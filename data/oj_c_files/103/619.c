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
      char a,str[1000];
      int i,k;
      gets(str);
      a = str[0];
      k = 1;
      
      if(('a' <= a) && (a <= 'z'))
      a = a + 'A' - 'a';
      
      for(i = 1;str[i] != '\0';i++)
      {
          
          if((str[i] == a) || (str[i] == a - 'A' + 'a'))    
          k++;
          else
          {
              printf("(%c,%d)",a,k);
              a = str[i];
              if(('a' <= a) && (a <= 'z'))
              a = a + 'A' - 'a';
              k = 1;
          }
      }
      printf("(%c,%d)",a,k);

}
