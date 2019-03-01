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

void main()
{ char a[300],m;
  int n,s,k=0,i;
  gets(a);
  n=strlen(a);
 for(m='a';m<='z';m++)
  {s=0;
   for(i=0;i<=n-1;i++)
    {if(a[i]==m)
      s=s+1;
     else;}
   if(s!=0)
   {printf("%c=%d\n",m,s);k=k+1;}
   else;
  }
 if(k==0)
 printf("No");
}