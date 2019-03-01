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


char s[1000],ss[1000],sl[1000];
int max,min;

int main()
{
    int t;
    cin>>s;
    max=min=strlen(s);
    strcpy(ss,s);
    strcpy(sl,s);
    while (cin>>s)
    {
          t=strlen(s);
          if (t>max)
          {
                    max=t;
                    strcpy(sl,s);
          }
          if (t<min)
          {
                    min=t;
                    strcpy(ss,s);
          }
    }
    cout<<sl<<endl<<ss<<endl;
    cin>>s;
    return 0;
}
