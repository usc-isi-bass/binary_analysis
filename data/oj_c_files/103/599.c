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

main()
{
      int f(int x);
      char str[1001];
      int i,m;
      char c;
      m=1;
      scanf("%s",str);
      for(i=0;(c=str[i])!='\0';i++)
        str[i]=f(str[i]);
      for(i=0;(c=str[i])!='\0';i++)
        if(str[i+1]==str[i])
        m=m+1;
        else {
             printf("(%c,%d)",str[i],m);
             m=1;
             }
}
int f(int x)
{
    if(x>='a'&&x<='z') x=x-'a'+'A';
    return(x);
}