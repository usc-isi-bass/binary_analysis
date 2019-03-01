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
{
  int x,y,z,i,n,a,b,c;
  z=0;
  a=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {scanf("%d %d",&x,&y);
   if(x>=90&&x<=140&&y>=60&&y<=90)
   z++;
   else z=0;
   if(z>=a) a=z; 
       }
  printf("%d",a);
   return 0;
}