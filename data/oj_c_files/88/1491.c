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
    char a[1000];
    cin.getline(a,1000);
    char *p;
    p = a;
    int b;
    b = strlen(a);
    for(;p<a+b;)
    {
       if((*p>='0')&&(*p<='9'))
       {
          cout << *p;
          p++;
          if((*p<'0')||(*p>'9'))
          cout << endl;
       }
       else
       p++;
    }
    return 0;
}
