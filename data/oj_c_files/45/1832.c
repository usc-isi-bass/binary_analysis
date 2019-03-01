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
  char s[100],w[100];
  int i,k=0;
  scanf("%s%s",s,w);
  for(i=0;w[i];i++)
    if(w[i]==s[k])
    {
      k++;
      if(k==strlen(s)-1)
        break;
    }
    else
      k=0;
  printf("%d\n",i-strlen(s)+2);
}
