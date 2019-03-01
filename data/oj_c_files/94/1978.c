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

int main( )
{ int a[500];
  int n,b,i,length=0;      //length???????
  cin >> n;
  for (i=0; i<n; i++)
  { cin >> b;
    if (b%2 == 1)          //???????????
    { a[length] = b;
      length++;
    }
  }
  sort(a,a+length);        //??
  cout << a[0];
  if (length>1)
  { for (i=1; i<length; i++)
    cout << ',' << a[i];
  }
  cout << endl;
  return 0;
}