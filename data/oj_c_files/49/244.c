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
{char str[550];
 cin.getline(str,501);
 int length=strlen(str);
 for(int i=2;i<=length;i++)
  for(int j=0;j<=length-i;j++)
   {int flag=1;
    for(int k=0;flag&&k<i/2;k++)
      if(str[j+k]!=str[j+i-1-k])
         flag=0;
    if(flag)
     {for(int k=0;k<i;k++)
        cout<<str[j+k];
      cout<<endl;
     }
   }
 return 0;
}
