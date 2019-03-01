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
      int a,b,c,d,e;
      int ans=1;
      for(a=1;a<=5;a++)
      {
                       if(a==1||a==2)
                       {
                                     e=1;
                                     d=1;
                                     continue;
                       }
                       else
                       {
                           for(e=4;e<=5;e++)
                           {
                                for(d=2;d<=5;d++)
                                {
                                    if(d==2)
                                    {
                                            for(c=3;c<=5;c++)
                                            {
                                                  if(a==5)
                                                  continue;   
                                            }
                                    }
                                    else
                                    {
                                        c=1;  
                                        if(a==5)
                                        {
                                          for(b=1;b<=5;b++)
                                          {
                                             if(a!=b&&c!=b&&d!=b&&e!=b&&a!=c&&a!=d&&a!=e&&c!=d&&c!=e&&d!=e)
                                                printf("%d %d %d %d %d",a,b,c,d,e);
                                          }
                                        } 
                                        else
                                        continue;
                                    }
                                }      
                           }
                       }    
      } 
}