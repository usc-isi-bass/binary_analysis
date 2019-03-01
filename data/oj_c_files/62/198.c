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
{  int i,j;
   char a[1000];
   gets(a);
   for(i=1;;i++)
{  
      if(a[i]==' '&&a[i-1]==' ')
{     for(j=i;;j++)
   {  a[j]=a[j+1];
      if(a[j+1]=='\0')
      break;    }
      i=i-1;        
}
    if(a[i]=='\0')    
    break;
}
  printf("%s",a);
   getchar();
    getchar();

     
}
