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

int main()
{int n,i,j;
 int panduan(int x);
 scanf("%d",&n);
   for(i=6;i<=n;i++)
      if(i%2==0)
        {printf("\n%d=",i);
          for(j=2;j<=i;j++)
            {
             if(panduan(j)==1&&panduan(i-j)==1)
             {printf("%d+%d",j,i-j);
              break;}  
            }
        }
}
int panduan(x)
{int a;
  if(x==2||x==3)return 1;
  else
  {
  {for(a=2;a<=sqrt(x);a++)
    if((x%a)==0)break;
   }
    if((x%a)==0) return 0;
    else return 1;}
  }   
 