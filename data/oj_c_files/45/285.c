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
{char a[50],b[50];
 int c,d,n,i,s;
 char *p=a;
 for(n=0;n<=5;)
   { scanf("%c",p+n);
     if(*(p+n)==' ')
       break;
     else
      n=n+1;}
   *(p+n)=0;
 gets(b);
 c=strlen(a);
 d=strlen(b);
 for(n=0;n<=d-1;)
 {if(b[n]!=a[0])
  n++;
  else
   {for(i=n;i<n+c;i++)
     {if(b[i]==a[i-n])
      s=0;
      else
        {s=1;break;}}
    if(s==0)
     {printf("%d",n);
       break;}
    else n=n+1;}
}
}
     
 
