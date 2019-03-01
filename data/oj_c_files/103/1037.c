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
      int i,j,k,t;
      i=j=k=0;
      int b[1000];
      while(k<1000) 
      {b[k]=1;
      k++;}
      char a[1000];
      gets(a);
      for(k=0;k<1000;k++)
      {
          if (a[k]>'Z')  {a[k]=a[k]-32;}
      }
      while(i<1000)
         { j=i;
                     if (a[j]=='\0')
                     break;
                     while(a[j]==a[j+1])
                     {
                         b[j+1]=b[j]+1;
                         j++;
                         
                     }
                         printf("(%c,%d)",a[j],b[j]);
                         i=j+1;
                   
         }           
     
      }