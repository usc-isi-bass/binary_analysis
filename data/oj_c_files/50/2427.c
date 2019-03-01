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
      int d,i,w;
      scanf("%d",&w);
      d=(w+5)%7;
      for(i=1;i<=12;i++)
      {
                        if(d%7==5) printf("%d\n",i);
                        if(i==2)
                        d=d+7;
                        else if(i==4||i==6||i==9||i==11)
                        d=d+2;
                        else d=d+3;
                        
                        }
                                                }
                        
