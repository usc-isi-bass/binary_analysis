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
      int i,j,count;
      char a[300]={'\0'};
      gets(a);
      for(i=0;i<300;i++)
      {
                        if(a[i]=='\0')break;
                        else if(a[i]!=' ')
                        {
                                   printf("%c",a[i]);
                                   count=0;
                        }
                        else if(count==0 && count==0)
                        {
                             printf(" ");count++;
                        }
      }
}