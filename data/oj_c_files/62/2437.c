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
  char in[10001]={0};
  int i,len;
  cin.get(in,1000);
  len=strlen(in);
  for (i=0;i<=len-1;i++)
    {
      if ((in[i]==' ')&&(in[i+1]==' ')) continue;//????????????????????????????????? 
      cout<<in[i];                    
    }    
  return 0;
}
