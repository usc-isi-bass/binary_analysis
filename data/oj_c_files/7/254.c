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
  char str[256]; 
  char sub[256]; 
  char rep[256]; 
  gets(str);
  gets(sub);
  gets(rep);
  char* p=strstr(str,sub); 
  if( p== NULL )
  { 
    printf("%s\n",str); 
  } 
  else 
  { 
    int len = strlen(rep); 
    int i; 
    for (i=0;i<len;i++) 
    {       *p = rep[i]; 
      p++; 
    }
    printf("%s\n",str); 
  } 
  return 0; 
}