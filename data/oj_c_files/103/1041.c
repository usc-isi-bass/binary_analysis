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
      char c[1024];
      int i,j,n,d;
      scanf("%s",c);
      d='A'-'a';
      for(i=0;i<=1024;i+=n)
      {
                              n=0;
                              if('a'<=c[i]&&c[i]<='z')
                              {
                                                      c[i]+=d;
                                                      for(j=i;j<=1024;j++)
                                                      {
                                                                          if(c[j]==c[i]||c[j]==c[i]-d) n++;
                                                                          else break;
                                                      }
                                                      printf("(%c,%d)",c[i],n); 
                              }
                              else if('A'<=c[i]&&c[i]<='Z')
                              {
                                   for(j=i;j<=1024;j++)
                                                      {
                                                                          if(c[j]==c[i]||c[j]==c[i]-d) n++;
                                                                          else break;
                                                      }
                                                      printf("(%c,%d)",c[i],n); 
                              }
                              else break;
      }
}
