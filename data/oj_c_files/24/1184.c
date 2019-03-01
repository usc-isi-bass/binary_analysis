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
   int i, y, z;
   char m[100], max[100],min[100];
   scanf("%s",m);
   y=z=strlen(m);
   strcpy(min,m);
   strcpy(max,m);
   for(i=1;i<50;i++)
   {
      scanf(" %s",m);
      if(y<strlen(m)){
          strcpy(max,m);
		  y=strlen(m);
      }
      if(z>strlen(m)){
          strcpy(min,m);
		  z=strlen(m);
      }
   }
   printf("%s\n%s",max,min);
   return 0;
}