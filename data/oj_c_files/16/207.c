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
    int n,i,m,c,j,k,t;
 scanf("%d",&n);
 i=n;c=0;j=0;
 while(i>0)
  {
        j++;
        m=i%10;
        i/=10;
        c=m+c*10;
  }
  i=c;k=0;
  while(i>0)
  {
  	k++;
  	i=i/10;
  	}
  for(t=1;t<=(j-k);t++)
  printf("0");
 printf("%d",c);
}