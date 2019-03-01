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
{
  char ca[80],cb[80];
  int i,na,nb,n,b=0;
  gets(ca);
  gets(cb);
  na=strlen(ca);
  nb=strlen(cb);
  n=(na>nb?na:nb);
  for(i=0;i<n;i++)
    {
      if((ca[i]>=65)&&(ca[i]<=90))
        ca[i]=ca[i]+32;
      if((cb[i]>=65)&&(cb[i]<=90))
        cb[i]=cb[i]+32;
    }
  if(strcmp(ca,cb)>0) printf(">");
  else if(strcmp(ca,cb)<0) printf("<");
  else printf("=");
}