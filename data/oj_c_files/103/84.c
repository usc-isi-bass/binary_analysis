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
      int i,j,k;
      char c,d;
      char b[1000];
      gets (b);
      k=strlen(b);
      c=b[0];
      j=0;
      for(i=0;i<k+1;i++)
      {

                 if(b[i]==c||b[i]==c+'a'-'A'||b[i]==c+'A'-'a')
                 {
                                                              j++;
                 }
                 else 
                 {
                      if(c>='a'&&c<='z')
                      printf("(%c,%d)",c+'A'-'a',j);
                      else
                      printf("(%c,%d)",c,j);
                      j=1;
                      c=b[i];
                 }
                      
      }
      getchar();
      getchar();
}