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


int main(int argc, char *argv[])
{
  int i,j,n=0;
  char a[30]={'\0'};
  gets(a);
  for(i=0;i<30;i++)
  {
        if(a[i]=='\0')
        break;
        if(a[i]>='0'&&a[i]<='9')
        printf("%c",a[i]);
        if((a[i]>'9'||a[i]<'0')&&(a[i-1]>='0'&&a[i-1]<='9'))        
        printf("\n");
  }
  return 0;
}
