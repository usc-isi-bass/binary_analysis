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
      int i,j,k,g,ans,max,temp,n,l,t;
      char c[1000];     
      while(scanf("%s",c)!=EOF)
      {
             printf("%s\n",c);
                      for(k=0;k<100;k++)
                      {
                                         for(i=0;c[i]!='\0';i++)
                                         {
                                                                if(c[i]=='(')
                                                                {
                                                                             for(j=i+1;c[j]!='\0';j++)
                                                                             {
                                                                                                    if(c[j]=='(')
                                                                                                    {
                                                                                                                 i=j-1;
                                                                                                                 break;
                                                                                                    }
                                                                                                    if(c[j]==')')
                                                                                                    {
                                                                                                                 c[i]=' ';
                                                                                                                 c[j]=' ';
                                                                                                                 break;
                                                                                                    }
                                                                             }
                                                                }
                                         }
                      }
                      for(i=0;c[i]!='\0';i++)
                      {
                                             if(c[i]=='(') c[i]='$';
                                             else if(c[i]==')') c[i]='?';
                                             else c[i]=' ';
                      }
                      printf("%s\n",c);
      }
      
}
