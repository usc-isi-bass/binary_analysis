#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int my_atoi(const char * str)
{
  int num=0;

  int sign=1;
  char *p=(char *)str;
  while(*p!='\0')
  {
      if(*p==' ')
      {
          p++;

      }
      else if(*p=='+')
      {
          p++;
          sign=1;

      }
      else if(*p=='-')
      {
          p++;
          sign=-1;
      }
      while(*p>='0'&&*p<='9')
      {
          int n=*p-'0';
          p++;
          num=(num*10+n);
      }

      return sign*num;
  }
  return 0;
}
