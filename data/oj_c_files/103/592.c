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
      char str[1000];
      gets(str);
      int i,k;
      for(i=0;str[i]!='\0';i=i+1)
      {
      if(str[i]>='a')
      str[i]=str[i]-32;
      }
     
      i=0;
      k=1;
      for(;str[i]!='\0';)
      {
      if(str[i]==str[i+1])
      {
      k=k+1;
      i=i+1;
      }
      else
      {
      printf("(%c,%d)",str[i],k);
      i=i+1;
      k=1;
      }
      
      
      }

}
