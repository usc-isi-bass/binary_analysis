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
  int n;
  cin >> n;
  int a;
  while(n>1)
  {
    if(n%2==1)
    {
     a=n*3+1;
     cout << n << "*" << 3 << "+" << 1 << "=" << a << endl;
     n=a;
    }
    else
    {
      a=n/2;
      cout << n << "/" << 2 << "=" << a << endl;
      n=a;
    }
   }
   cout << "End" << endl;
   cin.get();cin.get();cin.get();
   return 0;
}
    