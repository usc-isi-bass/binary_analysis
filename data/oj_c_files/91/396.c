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
      char a[150],b[150];
      gets(a);
      int i,len=strlen(a);
      for(i=0;i<len;i++)
      b[i]=a[i]+a[i+1];
      b[len-1]=a[0]+a[len-1];
      b[len]='\0';
      puts(b);
}