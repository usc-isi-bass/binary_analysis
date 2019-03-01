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
  char a[51],b[51];
  int i,j,k;
  scanf("%s%s",a,b);
  for(i=0;i<=strlen(b)-1;i++)
  {
                             if(a[0]==b[i])
                             for(j=0;j<=strlen(a)-1;j++)
                             if(a[j]!=b[i+j])
                             break;
                             if(j==strlen(a))
                             {printf("%d",i);
                             break;}
  }
  
  return 0;
}
