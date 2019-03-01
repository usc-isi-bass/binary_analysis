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
  char a[20000], temp;
  int i,j;
  j=0;
  for(i=0;i<20000;i++)//???????
  { scanf("%c", &temp);
    if(temp==a[j-1]&&a[j-1]==32);
    else {
          a[j]=temp;
          printf("%c", a[j]);
          j++;
	}
  }
  
  return 0;
}