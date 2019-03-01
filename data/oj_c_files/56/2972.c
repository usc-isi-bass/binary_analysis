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

           
void print(int n)
{
      int p=n;int i;
      if(p/10!=0)
      {
         for(i=0;p/10!=0;i++)
         {
                         int temp=p/10;
                         p=p-10*temp;
         }
         printf("%d",p);
         n=n/10;
         print(n);
      }
      else
      printf("%d",n);
}
     


main()
{
      int number,i;
      scanf("%d",&number);
      print(number);
    }

