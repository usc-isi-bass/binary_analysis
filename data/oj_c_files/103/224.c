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


int main(int argc, char *argv[])
{
  int i,j,n=0;
  char a[1000]={'\0'};
  gets(a);
  for(i=0;i<1000;i++)
  {
        if(a[i]=='\0')
        break;
        if(a[i]>='a'&&a[i]<='z')
        a[i]=a[i]-'a'+'A';
  }
  for(i=0;i<1000;i++)
  {
       if(a[i]=='\0')
       break;
       if(a[i]!=a[i+1])
       {
             n=0;
             for(j=i;a[j]==a[i];j--)
             n++;
             printf("(%c,%d)",a[i],n);
       }
  }
  return 0;
}
