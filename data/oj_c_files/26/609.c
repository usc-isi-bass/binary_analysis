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
  char a[100]={' '};
  int i,j,n=99;
  gets(a);
  for(i=99;i>=0;i--)
  {if(a[i]!='\0')
    {n=i;
    break;}
  }
  for(i=0;i<=n;i++)
 { if(a[i]==a[i+1]&&a[i]==' ')
      {for(j=i;j<n;j++)
        a[j]=a[j+1];
         i=i-1;
         n=n-1;
  }}
  for(i=0;i<=n;i++)
  printf("%c",a[i]);
 
}