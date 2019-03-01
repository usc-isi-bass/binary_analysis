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
    int x,y,t;
    cin>>x>>y;
    if (x>y)
    {
       t=x;x=y;y=t;
    }
    for (;(int)(log(x)/log(2))!=(int)(log(y)/log(2));)
      y=y/2;
    for (;(x!=y);)
    {
        x=x/2;
        y=y/2;
    }
    cout<<x;
}
