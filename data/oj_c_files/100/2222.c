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
    int n,k=0,i;
    char str[300],x='A';
    while(k<=299)
    {
       str[k]=getchar();
       if(str[k]=='\n') break;
       k=k+1;
      }
      i=k;
     while(x<='z')
     {
       n=0,k=0;
       while(k<=i)
       {
          if(str[k]==x)
          {n=n+1;}
          k=k+1;
        }
       if(n!=0)
       {printf("%c=%d\n",x,n);}
       if(x=='Z')
       x=x+7;
        else
        x=x+1;
      }
        k=0;
        while(k<=i)
     {
        if((str[k]>='A'&&str[k]<='Z')||(str[k]>='a'&&str[k]<='z'))
        break;
       else if(k==i)
       printf("No\n");
       k=k+1;
        }
     return 0;
}