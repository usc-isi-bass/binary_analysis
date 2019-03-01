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
      int n;
      scanf("%d",&n);
      getchar();
      int i,j;
      char x[100];
      for(j=0;j<n;j++)
      {
                      gets(x);
                      if(x[0]=='_'||(x[0]>='A'&&x[0]<='z'))
                      {
                                                           if(x[1]=='\0')
                                                           {
                                                                printf("1\n");
                                                                continue;
                                                           }
                      }                      
                      else
                      {
                          printf("0\n");
                          continue;         
                      }
                      for(i=1;x[i]!='\0';i++)
                      { 
                                             if(x[i]=='_'||(x[i]>='A'&&x[i]<='z')||(x[i]>='0'&&x[i]<='9'))
                                                      continue; 
                                             else
                                             {
                                                      printf("0\n");
                                                      break; 
                                             }
                      }
                      if(x[i]=='\0')
                          printf("1\n"); 
      }
}
                          
