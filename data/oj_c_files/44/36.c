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

int reverse(int num)
{
 int a, rev=0;
 int i, count=0;
 for(i=0; ;i++)
   {
    a=num%10;
    rev=rev*10+a;
    num=num/10;
    if(num==0) break;
    }
 return rev;
}
 int main()
{
 int num;
 int rev;
 int a[6];
 int i;
 for(i=0; i<6; i++)
   {
    scanf("%d", &a[i]);
   }
 for(i=0; i<6; i++)
   {
 if(a[i]<0)
     {
      a[i]=-a[i];
      rev=reverse(a[i]);
      printf("%d\n", -rev);
     }
 else
    {
     rev=reverse(a[i]);
     printf("%d\n", rev);
    }
   }
 return 0;
}