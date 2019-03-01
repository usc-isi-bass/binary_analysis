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
     char a[1000],b[1000];
     int c[1000],j=0;                                                             /*b???? c????????? j???j?*/
     b[0]=0;
     c[1]=0;
     scanf("%s",a);
     for(int i=0;;i++)
     {
          if(a[i]=='\0') 
          {    printf("(%c,%d)",b[j],c[j]);
               break;
          }
          if(a[i]==b[j]||a[i]==b[j]+32) c[j]=c[j]+1;
          else
          {
          if(j>0) printf("(%c,%d)",b[j],c[j]);
          j=j+1;
          c[j]=1;
          if(a[i]<=90) b[j]=a[i];
          else b[j]=a[i]-32;
          }                      
     }
               
}
