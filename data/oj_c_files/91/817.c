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
      int m,n,i,j;
      char a[100000],b;
      char *p;
      gets(a);
      p=a;
      b=*p;
      for(i=1;*(p+i)!='\0';i++) 
      {
                                *(p+i-1)=*(p+i)+*(p+i-1);
      }
      n=strlen(p);
      *(p+n-1)=b+*(p+n-1);
      puts(p);

}
