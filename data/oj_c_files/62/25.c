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
  char a[65535],b[65535];
  gets(a);
  int l=strlen(a);
  b[0]=a[0];
  for(int i=1,k=1;a[i]!='\0';i++)
  {
    if(a[i-1]==' '&&a[i]==' ')
    {}
    else
    {b[k]=a[i];
    k++;
    }
  }
  puts(b);
  
  getchar();
  getchar();
}
