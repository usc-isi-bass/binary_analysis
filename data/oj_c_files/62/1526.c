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
    char *p;
    char str[200];
    p = str;
    int i,n,j,b=0;
    cin.getline(str,200);
    n = strlen(str);
    for(i=0;i<n-1;i++)
    {
        if(*(p+i)==' ')
        {
          for(j=i+1;j<n;j++)
          {
              if(*(p+j)==' ')
                b++;
              else
                break;
          }
          i = i + b;
          b = 0;
        }
        cout << *(p+i);
    }
    cout << *(p+n-1) <<endl;
}