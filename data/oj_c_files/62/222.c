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
      char c;
      int flag=1,a;
      scanf("%c",&c);
      while(c!='\n') 
      {
           if((c==' ' && flag)||(c!=' ')) printf("%c",c);
           if(c==' ') flag=0;
           else flag=1;
           scanf("%c",&c);
      }
}
