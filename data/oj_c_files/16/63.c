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
  char a[6];
  gets(a);
  int i,j;
  j=strlen(a);
  for(i=j-1;i>=0;i--)
  printf("%c",a[i]) ;
  getchar();
  getchar();    
}
