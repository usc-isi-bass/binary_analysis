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
      char a[105];
      scanf("%s",a);
      int c=0,d=0,e,i=0;
      while(a[i]!='\0')
      {
                       e=a[i]-'0';
                       c=d*10+e;
                       d=c%13;
                       a[i]=c/13+'0';
                       i++;
      }
      if(a[1]=='\0') printf("0");
      else if(a[1]=='0') 
      {
           if(a[2]!='\0') printf("%s",&a[2]);
           else printf("0");
      }
      else printf("%s",&a[1]);
      printf("\n");
      printf("%d",d);
}
                       
