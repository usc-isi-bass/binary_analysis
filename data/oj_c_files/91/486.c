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
      char a[101],b[101];
      gets(a);
      
      int i;
      for(i = 0;i < strlen(a);i++)
      b[i] = a[i] + a[(i+1) % strlen(a)];
      
      b[strlen(a)] = 0;
      puts(b);
      return 0;
}
