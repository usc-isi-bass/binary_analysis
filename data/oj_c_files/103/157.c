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
  char c[1001],b;
  int j,a=1;
  scanf("%s",c);
  for(j=1;;j++)
  {
    if(c[j]==c[j-1] && c[j]!='\0' || c[j]==c[j-1]+32 || c[j]==c[j-1]-32)
    {
       a++;
    }
    if(c[j]!=c[j-1] && c[j]!='\0' && c[j]!=c[j-1]+32 && c[j]!=c[j-1]-32)
    {
      if(c[j-1]>='A' && c[j-1]<='Z')
        printf("(%c,%d)",c[j-1],a);
      if(c[j-1]>='a' && c[j-1]<='z')
        printf("(%c,%d)",c[j-1]+'A'-'a',a);
      a=1;    
    } 
    if(c[j]=='\0')
    {
      if(c[j-1]>='A' && c[j-1]<='Z')
        printf("(%c,%d)",c[j-1],a);
      if(c[j-1]>='a' && c[j-1]<='z')
        printf("(%c,%d)",c[j-1]+'A'-'a',a);
      break;
    }
  }                

}
